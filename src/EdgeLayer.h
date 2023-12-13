#pragma once
#include "LLNode.h"
#include "LLEdge.h"
#include "Node.h"
#include "Neuron.h"
#include "NeuronLayer.h"

class EdgeLayer : public LLEdge {
public:
    EdgeLayer(NeuronLayer* prev, NeuronLayer* next) : LLEdge(), numOfEdges(0) {
        Node<float>* nodePrev = (Node<float>*) prev->getHead();
        while(nodePrev->getPrev() != nullptr) {
            Node<float>* nodeNext = (Node<float>*) next->getHead();
            // This skips over the first node in the front layer as its the 
            // bias node.
            //nodeNext = nodeNext->getPrev();
            Neuron* neuronPrev = (Neuron*) prev->getHead(); 
            while(nodeNext->getPrev() != nullptr) {
                //Edge* nN = (Edge*) nodeNext;
                Edge* nN = new Edge(0.5);
                Neuron* neuronNext = (Neuron*) nodeNext;
                nN->setNextLN(neuronNext);
                nN->setPrevLN(neuronPrev);
                LLNode* h = (LLNode*) this->getHead();
                h->add_back(nN);
                numOfEdges++;
                nodeNext = nodeNext->getPrev();
            }
            nodePrev = nodePrev->getPrev();
        }
    };

    const void displayForward() {
        std::cout << "\nSize of LinkedList: " << size;
        Node<float>* current = (Node<float>*) this->head;
        while(current->getPrev() != nullptr) {
            Edge* e = (Edge*) current;
            e->display();
            current = current->getPrev();
        }
        current->display();
    }

    const void summary() {
        std::cout << "\n Edges ";
        Node<float>* current = (Node<float>*) this->head;
        //std::cout << "\n Edgelayer summary: " << this->head;
        while(current->getPrev() != nullptr) {
            current = current->getPrev();
            Edge* e = (Edge*) current;
            e->summary();
        }
    }

    const int getNumOfEdges() { return this->numOfEdges; };

private:
    int numOfEdges;
};
