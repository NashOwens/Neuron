#include "List.h"

void List::addToEnd(Node* nodeToAdd) {
    double size = this->nodes.size();
    if (size == 0) {
        nodeToAdd->setLink(this->head);
        this->nodes.push_back(nodeToAdd);
        this->tail = nodeToAdd;
    } else {
        this->nodes.front()->setLink(nodeToAdd);
        this->nodes.push_back(nodeToAdd);
    }
}

