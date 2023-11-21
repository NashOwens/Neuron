#include "Activation.h"

template<class T>
class Neuron : public Node<T> {
public:
    Neuron<T>(T data, float accumulated=1.0) : accumulated(accumulated) {};
    ~Neuron();

    void Activate(std::string activation_type) {
        Activation::Activate(activation_type, this->data);
    }
private:
    float accumulated;
};
