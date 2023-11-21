#include "Node.h"
#include <vector>

template<class T>
class LLNode {
private:
    int size;
    Node<T>* head;
public:
    LLNode() : size(0) {};
    LLNode(Node<T>* node) : head(node), size(1) {};
    ~LLNode() {};

    /*
     * Invokes the display() function for each node in the Linked list.
     */
    const void displayForward() {
        std::cout << "\nSize of LinkedList: " << size;
        Node<T>* current = this->head;
        while(current->getPrev() != nullptr) {
            current->display();
            current = current->getPrev();
        }
        current->display();
    };
    
    /*
     * Invokes the display() function for each node in the Linked list backwards.
     */
    const void displayBack() {
        std::cout << "\nSize of LinkedList: " << size;
        Node<T>* current = this->head;
        while(current->getPrev() != nullptr) {
            current = current->getPrev();
        };
        while(current->getNext() != nullptr) {
            current->display();
            current = current->getNext();
        };

    };

    /*
     * Adds a node to the back of the Linked list.
     */
    template<class K>
    const void add_back(Node<K>* node) { 
        Node<T>* current = this->head;
        while(current->getPrev() != nullptr) {
            current = current->getPrev();
        }
        node->setNext(current);
        current->setPrev(node);
        size++;
    };

    /*
     * Adds a node to the front of the Linked list.
     */
    template<class K>
    void add_front(Node<K>* node) {
        this->head->setNext(node);
        node->setPrev(this->head);
        this->head = node;
        size++;
    };

    /*
     * Removes a node at the given index of the Linked list.
     */
    void remove(int index) {
        Node<T>* current = this->head;
        for (int i=0;i<index;i++) {
            if (current->getPrev() != nullptr) {
                current = current->getPrev();
            } else {
                std::cout << "\nNode not found...\n";
            }
        }
        if (current->getPrev()->getPrev() != nullptr) {
            Node<T>* remove = current->getPrev();
            std::cout << "\nDeleting node(data=" << remove->getData() << ")";
            current->getPrev()->getPrev()->setNext(current);
            current->setPrev(current->getPrev()->getPrev());
            delete remove;
            size--;
        } 
    };

    /*
     * Removes a node given from the Linked list.
     */
    template<class K>
    void remove(Node<K>* node) {
        std::cout << "\nDeleting node(data=" << node->getData() << ")";
        Node<K>* current = this->head;
        Node<K>* remove = nullptr;
        if (current == node) {
            this->head = current->getPrev();
            delete current;
            size--;
            return;
        }
        while(current->getPrev() != node && current->getPrev() != nullptr) {
            current = current->getPrev();
        }
        if(current->getPrev() != nullptr && current->getPrev()->getPrev() != nullptr) {
            remove = current->getPrev();
            Node<K>* connect = current->getPrev()->getPrev();
            connect->setNext(current);
            current->setPrev(connect);
            delete remove;
            size--;
        } else { std::cout << "\nNode not found...\n"; };
    };
};
