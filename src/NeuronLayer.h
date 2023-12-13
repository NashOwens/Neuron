#pragma once
#include <string>
#include "LLNeuron.h"
#include "Neuron.h"
#include "Node.h"
#include <iostream>

class NeuronLayer : public LLNeuron {
public:
    NeuronLayer() : LLNeuron(), numOfNeurons(0), activation("linear") {};
    NeuronLayer(int numOfNeurons, std::string activation) : LLNeuron(), numOfNeurons(numOfNeurons), activation(activation) {
        numOfNeurons++;
        for (int i=0;i<numOfNeurons;i++) {
            Node<float>* node = (Node<float>*) new Neuron(0.1, 0.0);
            this->add_back(node);
        };
    };
    ~NeuronLayer();

    void ActivateLayer() {
        if (this->head == nullptr) {
            std::cout << "\nEmpty Layer...\n";
            return;
        }
        Node<float>* node = (Node<float>*) this->head;
        while(node->getPrev() != nullptr) {
            Neuron* a = (Neuron*) node;
            a->Activate(activation);
            node = node->getPrev();
        }
    }

    void LinkToLayer(NeuronLayer* n) {
        NeuronLayer* node = n; 
        node->setPrev(this);
        this->setNext(node);
    }

    void summary() {
         std::cout << "\n| Neurons: (" 
            << getNumOfNeurons() << ") ---- Activation: " 
            << activation << " |";
    }
    
    int getNumOfNeurons() { return this->numOfNeurons; };

    std::string getActivation() const { return activation; };

private:
    int numOfNeurons;
    std::string activation;
};
