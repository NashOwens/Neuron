#include <vector>
#include "Node.h"

class List {
public:
    inline List() : head(nullptr), tail(nullptr) {};
    inline List(Node* node) : head(node) { nodes.push_back(node); };
    List(std::vector<Node*> nodes) : nodes(nodes) {
        int size = nodes.size();
        if (nodes.front()) {
            this->head = nodes.front();
        }
        if (nodes.back()) {
            this->tail = nodes.back();
        }
        this->nodes = nodes;
    };
    inline ~List() {};
    
    inline std::vector<Node*> getList() { return nodes; };
    void addToEnd(Node* nodeToAdd);
    inline Node* getNodeByIndex(int index) { return nodes[index]; };
private:
    Node* head;
    Node* tail;
    std::vector<Node*> nodes;
};
