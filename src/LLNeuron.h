#pragma once
#include "LLNode.h"
#include "Neuron.h"
#include <vector>

class LLNeuron : public LLNode<float> {
protected:
    int size;
private:
    LLNeuron* next;
    LLNeuron* prev;
public:
    // For some reason the bias neuron i instantiate below is effecting all
    // neurons data values equally.

    // If a LLNeuron is created with no neuron objects a single neuron is added
    // and is to represent the BIAS Neuron.
    LLNeuron() : LLNode<float>(new Neuron(0.7, 0.0)), next(nullptr), prev(nullptr) {};
    LLNeuron(Neuron* node) : LLNode<float>(node), next(nullptr), prev(nullptr) {};
    ~LLNeuron() {};
  
    void setNext(LLNeuron* n) { this->next = n; };
    LLNeuron* getNext() { return this->next; };

    void setPrev(LLNeuron* n) { this->prev = n; };
    LLNeuron* getPrev() { return this->prev; };
};

