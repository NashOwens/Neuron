#include <iostream>
#include "LLNode.h"
#include "Neuron.h"
#include "Edge.h"

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
    list->displayBack(); 
}

void test_Neuron() {
    Neuron<int>* n = new Neuron<int>(1);
}

void test_Edge() {
    Edge<int>* e = new Edge<int>(1.0,0.0);
}

int main() {
    test_DLL();
    test_Neuron();
    test_Edge();

    std::cout << "\nExit Success!" << "\n";
    return 0;
}


