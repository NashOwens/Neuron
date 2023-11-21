#include "Neuron.h"
#include <string>

template<class T>
class Layer {
public:
    Layer(int numOfNeurons, string activation) {
        for (int i=0;i<numOfNeurons;i++) {
            Neuron<T>* n = new Neuron<T>(0.0);
            neurons.push_back(n);
        }
    };
    ~Layer();

    void Traverse() {
        
    }

private:
    Vector<Neuron<T>*>* neurons;
}
