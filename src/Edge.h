#pragma once
#include "Node.h"
#include "Neuron.h"

class Edge : public Node<float> {
public:
    Edge() : Node<float>(0.0), nextLN(nullptr), prevLN(nullptr),
                                weight(0.0), prev_weight(0.0) {};
    Edge(float weight) : Node<float>(0.0), nextLN(nullptr), prevLN(nullptr), 
                                weight(weight), prev_weight(0.0) {};

    inline void display() const {
        std::cout << "\n w: " << weight;
    }

    inline float getWeight() { return weight; };
    inline void setWeight(float newWeight) { weight = newWeight; };

    inline float getPrevWeight() { return prev_weight; };
    inline void setPrevWeight(float weight) { prev_weight = weight; };  

    inline void setNextLN(Neuron* n) { nextLN = n; };
    inline Neuron* getNextLN() { return nextLN; };

    inline void setPrevLN(Neuron* n) { prevLN = n; };
    inline Neuron* getPrevLN() { return prevLN; };

    inline void summary() {
        //std::cout << "\n nextLN: " << nextLN;
        std::cout << "\n Next Neuron Values input: " << nextLN->getAccumulated();
    
    }

private:
    Neuron* nextLN;
    Neuron* prevLN;
    float weight;
    float prev_weight;
};
