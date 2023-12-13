#pragma once
#include "NeuronLayer.h"
#include "EdgeLayer.h"
#include "LLNeuron.h"
#include "LLEdge.h"
#include "Node.h"
#include "Neuron.h"
#include "Edge.h"

class Network {
private:
    NeuronLayer* headN;
    EdgeLayer* headE;
public:
    // Create an empty network.
    Network() : headN(nullptr), headE(nullptr) {};
    // Create a network with a starting NeuronLayer
    // NOTE: Change to InputLayer if i add it in future,,,
    Network(NeuronLayer* n) : headN(n), headE(nullptr) {};
    
    /*
     *  Returns the deepest NeuronLayer in the network.
     */
    NeuronLayer* getDeepestLayer() {
        LLNeuron* current = (LLNeuron*) this->headN;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        NeuronLayer* end = (NeuronLayer*) current;
        return end;
    }
    /*
     *  Returns the deepest EdgeLayer in the network.
     */
    EdgeLayer* getDeepestEdge() {
        LLEdge* current = (LLEdge*) this->headE;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        EdgeLayer* end = (EdgeLayer*) current;
        return end;
    }
    /*
     *  Adds a NeuronLayer to the back of the network.
     */
    void addLayer(NeuronLayer* n) {
        if (this->headN == nullptr) {
            this->headN = n;
        } else {
            NeuronLayer* deepest = this->getDeepestLayer();
            LLNeuron* nodeN = (LLNeuron*) deepest;
            nodeN->setNext(n);
            EdgeLayer* e = new EdgeLayer(deepest, n);
            if (this->headE == nullptr) {
                this->headE = e;
            } else {
                LLEdge* end = (LLEdge*) this->getDeepestEdge();
                if (end != nullptr) {
                    end->setNext(e);
                }
            }
        }
    }

    void checkNeuronEdge(Neuron* n, Edge* e) {
        //Only accumulate the value if the prev neuron in the edge is
        //the same as the current neuron.
        Node<float>* data = (Node<float>*) n;
        if(n == e->getPrevLN()) {
            float weight = e->getWeight();
            std::cout << "\ndata: " << data->getData();
            e->getNextLN()->accumulate(((float)data->getData() * weight));
            //std::cout << "\n Neuron data forward pass accumulated: "
            //    << e->getNextLN()->getAccumulated();
        } 
    }

    void activateNeuronLayer(Node<float>* nodeN, Node<float>* nodeE, Node<float>* nodeA, const std::string activation) {
       while (nodeN->getPrev() != nullptr) {
            Neuron* bias = (Neuron*) nodeN;
            nodeN = nodeN->getPrev();
            Neuron* n = (Neuron*) nodeN;
            // Skip the bias neuron in the forward layer as we don't want to
            // change it.
            //nodeN = nodeN->getPrev();
            //Iterate over each edge in the current layer
            while(nodeE->getPrev() != nullptr) {
                Edge* e = (Edge*) nodeE;
                checkNeuronEdge(n, e);
                nodeE = nodeE->getPrev();
            }
            Edge* e = (Edge*) nodeE;
            checkNeuronEdge(n, e);
            //nodeN = nodeN->getPrev();
        }
        Neuron* n = (Neuron*) nodeN;
        Edge* e = (Edge*) nodeE;
        checkNeuronEdge(n, e);

        while(nodeA->getPrev() != nullptr) {
            std::cout << "\n Do a thing";
            Neuron* a = (Neuron*) nodeA;
            a->Activate(activation);
            nodeA = nodeA->getPrev();
        }
    }

    /*
     *  Forward pass.
     *  NOTE: the activation string from the first neuron layer is used for all
     *  layers... FIX!
     */
    void fP() {
        LLNeuron* neuron = (LLNeuron*) this->headN;
        LLEdge* edge = (LLEdge*) this->headE;
        while(neuron->getNext() != nullptr) { 
            Node<float>* nodeE = (Node<float>*) edge->getHead();
            Node<float>* nodeN = (Node<float>*) neuron->getHead();
            std::cout << "\n Edge layer";
            NeuronLayer* nL = (NeuronLayer*) neuron;
            std::string activation = nL->getActivation();
            std::cout << "\n activation: " << activation;
            //Iterate over each neuron in the current layer
            if (neuron->getNext() != nullptr) {
                LLNeuron* nextLayer = (LLNeuron*) neuron->getNext();
                Node<float>* nodeA = (Node<float>*) nextLayer->getHead();
                activateNeuronLayer(nodeN, nodeE, nodeA, activation);    
            }
            neuron = neuron->getNext();
            if (edge->getNext() != nullptr) {
                edge = edge->getNext();
            }
        }
        Node<float>* nodeN = (Node<float>*) neuron->getHead();
        Node<float>* nodeE = (Node<float>*) edge->getHead();
        NeuronLayer* nL = (NeuronLayer*) neuron;
        Neuron* n = (Neuron*) nodeN;
        Edge* e = (Edge*) nodeE;
        // Now i need to set the input values of each neuron to the accumulation in the edges.
    }

    /*
     *  Activates all Neurons in the network using their accumualted values from forwardpass.
     */
    void activateLayers() {
        LLNeuron* neuron = (LLNeuron*) this->headN;
        while(neuron->getNext() != nullptr) {
            NeuronLayer* layer = (NeuronLayer*) neuron;
            Node<float>* nodeN = (Node<float>*) neuron->getHead();
            while(nodeN->getPrev() != nullptr) {
                Neuron* n = (Neuron*) nodeN;
                n->Activate(layer->getActivation());
                nodeN = nodeN->getPrev();
            }
            Neuron* n = (Neuron*) nodeN;
            //n->Activate(layer->getActivation());
            neuron = neuron->getNext();
        }
        NeuronLayer* layer = (NeuronLayer*) neuron;
        Node<float>* nodeN = (Node<float>*) neuron->getHead();
        while(nodeN->getPrev() != nullptr) {
            Neuron* n = (Neuron*) nodeN;
            n->Activate(layer->getActivation());
            nodeN = nodeN->getPrev();
        }
        
        //Neuron* n = (Neuron*) nodeN;
        //n->Activate(layer->getActivation());
    }

    /*
     *  Displays the networks Neuron layers with their activation and params.
     */
    void summary() {
        LLNeuron* current = (LLNeuron*) this->headN;
        LLEdge* curr = (LLEdge*) this->headE;
        int layerNum = 1;
        int totalParams = 0;
        while(current->getNext() != nullptr) {
            NeuronLayer* layer = (NeuronLayer*) current;
            std::cout << "\n  Layer " << layerNum;
            layer->summary();
            current = current->getNext();
            layerNum++;
            EdgeLayer* edge = (EdgeLayer*) curr;
            std::cout << "\n Params: " << edge->getNumOfEdges() << "\n";
            totalParams += edge->getNumOfEdges();
            if (curr != nullptr) edge->summary();
            if(curr->getNext() != nullptr) {
                curr = curr->getNext();
            }
        }
        NeuronLayer* layer = (NeuronLayer*) current;
        std::cout << "\n  Layer " << layerNum;
        layer->summary();
        std::cout << "\n Total Params: " << totalParams << "\n";
    }
};
