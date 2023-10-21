#include <iostream>
#include "List.h"

int main() {
	std::cout << "\n Running 'run' executable...\n\n";
	Node* node = new Node(1);
	std::cout << node->getData() << "\n";
    Node* link = new Node(2);
    node->setLink(link);

	List* list = new List();
	list->addToEnd(node);
	std::cout << list->getList()[0]->getData() << "\n";
 
    std::vector<Node*> vec;
    for (double i=0;i<10;i++) {
        vec.push_back(new Node(i));
    }
    List* nlist = new List(vec);
    std::cout << nlist->getNodeByIndex(10)->getData() << "\n";

    return 0;
}
