#pragma once
#include "LLNode.h"
#include "Edge.h"

class LLEdge : public LLNode<float> {
public:
    LLEdge() : LLNode<float>(new Edge()) {};
    LLEdge(Edge* e) : LLNode<float>(e) {};

    /*
     * Invokes the display() function for each node in the Linked list.
     */
    const void displayForward() {
        std::cout << "\nSize of LinkedList: " << size;
        Edge* current = (Edge*) this->head;
        while(current->getPrev() != nullptr) {
            current->display();
            current = (Edge*) current->getPrev();
        }
        current->display();
    };

    void setNext(LLEdge* e) { this->next = e; };
    LLEdge* getNext() { return this->next; };

    void setPrev(LLEdge* e) { this->prev = e; };
    LLEdge* getPrev() { return this->prev; };

private:
    LLEdge* next;
    LLEdge* prev;
};

