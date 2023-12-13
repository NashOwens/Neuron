#include <iostream>
#include "Node.h"
#include "Neuron.h"
#include "Edge.h"
#include "LLNode.h"
#include "LLEdge.h"
#include "LLNeuron.h"
#include "NeuronLayer.h"
#include "EdgeLayer.h"
#include "Network.h"
/*
 * Following tests are fairly basic and test functionality to a decent degree,
 * Fringe case isnt always considered...
 */

void test_DLL() {
 	std::cout << "\nRunning 'run' executable...\n\n";
	Node<int>* node = new Node<int>(1);
    Node<int>* lastNode = new Node<int>(999999);

	LLNode<int>* list = new LLNode<int>(node);
    for (int i=0;i<10;i++) {
        Node<int>* node = new Node<int>(i);
        list->add_back(node);
        //list->add_front(node);
        if (i == 8) lastNode = node;
    }
    list->remove(2);
    list->remove(node);
    list->remove(lastNode);
    list->displayForward();
    //list->displayBack();
}

void test_Neuron() {
    std::cout << "\nStarting Neuron Test....\n";
    Neuron* n = new Neuron(1);
    n->display();
    std::cout << "\nNeuron test Done.\n";
}

void test_Edge() {
    std::cout << "\nStarting Edge Test....\n";
    Edge* e = new Edge(1.0);
    e->display();
    std::cout << "\nEdge Test Done.\n";
}

void test_Layer() {
    std::cout << "\nStarting Layer Test....\n";
    
    NeuronLayer* nLayer = new NeuronLayer(10, "tanh");
    nLayer->displayForward();
    nLayer->displayBack();
    nLayer->summary();
    nLayer->ActivateLayer();
    NeuronLayer* nLayer2 = new NeuronLayer();
    nLayer2->summary();
    nLayer2->displayForward();
    nLayer2->summary();
    nLayer2->ActivateLayer();

    std::cout << "\nLayer Test Done\n";
}

void test_Edges() {
    std::cout << "\nStarting Edges test....\n";
    //Edges<float>* e = new Edges<float>();
    
    std::cout << "\nEdges Test Done\n";
}

void test_cast() {
    std::cout << "\nStarting Cast Test.\n";
    Node<int>* n = new Node<int>();
    Edge* e = (Edge*) n;
    e->display();
    std::cout << "\nCast Test Done\n";
}

void test_linking_layers() {
    std::cout << "\nStarting Linking Layers Test.\n";
    NeuronLayer* n = new NeuronLayer(5, "linear");
    NeuronLayer* n1 = new NeuronLayer(5, "linear");
    
    n->LinkToLayer(n1);
    std::cout << "\nLinking Layers Test Done.\n";
}

void test_Network() {
    std::cout << "\nStarting Network Test.\n";
    NeuronLayer* n = new NeuronLayer(5, "tanh");
    NeuronLayer* n1 = new NeuronLayer(0, "sigmoid");
    
    //n->LinkToLayer(n1);
    //Network* net = new Network(n);
    //net->summary();
    
    std::cout << "\nNetwork Test Done.\n";
}

void test_LLEdge() {
    std::cout << "\nStarting LLEdge Test.\n";
    Edge* edge = new Edge(0.3);
    Edge* edge2 = new Edge(0.5);
    Edge* edge3 = new Edge(1.0);
    LLEdge* e = new LLEdge(edge);
    
    
    e->add_back(edge2);
    e->add_front(edge3);
    e->displayForward();
    std::cout << "\nLLEdge Test Done!\n";
}
void test_NeuronEdgeTraversal() {
    std::cout << "\n Starting Neuron Edge Traversal\n";
    NeuronLayer* n = new NeuronLayer(3, "linear");
    NeuronLayer* n1 = new NeuronLayer(3, "linear");
    NeuronLayer* n2 = new NeuronLayer(2, "linear");

    EdgeLayer* e = new EdgeLayer(n, n1);
    EdgeLayer* e2 = new EdgeLayer(n1, n2);
    std::cout << "\n EdgeLayer 1:";
    e->displayForward();

    std::cout << "\n EdgeLayer 2:";
    e2->displayForward();

    std::cout << "\n Neuron Edge Traversal Test Done.\n";
};

void test_NetworkLayerGen() {
    std::cout << "\n Starting Network Layer Gen Test.\n";
    NeuronLayer* n = new NeuronLayer(2, "linear");
    NeuronLayer* n1 = new NeuronLayer(2, "tanh");
    NeuronLayer* n2 = new NeuronLayer(2, "sigmoid");
    NeuronLayer* n3 = new NeuronLayer(2, "relu");

    Network* net = new Network(n);

    net->addLayer(n1);
    net->addLayer(n2);
    net->addLayer(n3);

    net->fP();

    //net->summary();

    std::cout << "\n Network Layer Gan Test Done.\n";
}

void test_forwardPass() {
    std::cout << "\n Starting Forward pass Test.\n";
    NeuronLayer* n = new NeuronLayer(2, "linear");
    NeuronLayer* n1 = new NeuronLayer(2, "sigmoid");
    NeuronLayer* n2 = new NeuronLayer(2, "relu");
    NeuronLayer* n3 = new NeuronLayer(2, "tanh");
    NeuronLayer* n4 = new NeuronLayer(1, "linear");

    Network* net = new Network(n);

    net->addLayer(n1);
    net->addLayer(n2);
    net->addLayer(n3);
    net->addLayer(n4);

    net->fP();
    //net->activateLayers();
    net->summary();
    
    std::cout << "\n Forward pass Done.\n";
}

int main() {
    test_DLL();
    test_Neuron();
    test_Edge();
    test_Layer();
    test_Edges();
    test_cast();
    test_linking_layers();
    test_Network();
    test_LLEdge();
    test_NeuronEdgeTraversal();
    test_NetworkLayerGen();
    test_forwardPass();

    std::cout << "\nExit Success!" << "\n";
    return 0;
}


