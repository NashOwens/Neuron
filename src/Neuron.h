#pragma once
#include <vector>
#include "Activation.h"
#include "Node.h"
#include <iostream>
#include <memory>

class Neuron : public Node<float> {
public:
    //Constructor used for bias neuron
    Neuron() : Node<float>(0.3), accumulated(0.0) {};
    Neuron(float data, float accumulated=0.0) : Node<float>(data),
    accumulated(accumulated) {};
    ~Neuron();

    inline void setAccumulated(float a) { accumulated = a; };

    inline float getAccumulated() { return accumulated; };

    inline void accumulate(float a) { accumulated += a; };

    inline float getData() { return this->data; };

    inline void setInput(float in) { input = in; };

    inline float getInput() { return input; };

//    inline void setPrev(Neuron<T>* newLink) { this->prev = (Node<T>*) newLink; };
//    inline void setNext(Neuron<T>* newLink) { this->next = (Node<T>*) newLink; };

//	inline Neuron<T>* getPrev() { return (Neuron<T>*) this->prev; };
//    inline Neuron<T>* getNext() { return (Neuron<T>*) this->next; };

//    inline float getAccumulated() { return this->accumulated; };
//    inline void setAccumulated(float a) { this->accumulated = a; }; 
    
//    virtual void display() const {
//        std::cout << "\n" << this->data;
//    };

    void Activate(std::string activation_type) {
        float y = Activation::Activate(activation_type, this->accumulated);
        std::cout << "\nActivating data: " << this->accumulated << " y -> " << y;
        this->setData(y);
    };

private:
    float input;
    float output;
    float accumulated;
};
