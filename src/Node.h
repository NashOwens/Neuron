#include <iostream>

template<class T>
class Node {
public:
    Node() {};
	Node(T data) : data(data), prev(nullptr), next(nullptr) {};
	~Node() {};

    template<class K>
	inline void setData(K newData) { this.data = newData; }; 
	inline T getData() { return data; };
    
	inline void setPrev(Node<T>* newLink) { prev = newLink; };
    inline void setNext(Node<T>* newLink) { next = newLink; };

	inline Node* getPrev() { return prev; };
    inline Node* getNext() { return next; };
    
    const void display() {
        std::cout << "\n" << data;
    };
private:
	T data;
	Node<T>* prev;
    Node<T>* next;
};
