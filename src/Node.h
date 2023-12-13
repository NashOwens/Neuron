#pragma once
#include <iostream>

template<class T>
class Node {
public:
    Node() : prev(nullptr), next(nullptr) {};
	Node(T data) : data(data), prev(nullptr), next(nullptr) {};
	~Node() {};

	inline void setData(T newData) { data = newData; }; 
	inline T getData() { return data; };
    
	inline virtual void setPrev(Node<T>* newLink) { prev = newLink; };
    inline virtual void setNext(Node<T>* newLink) { next = newLink; };

	inline virtual Node<T>* getPrev() { return prev; };
    inline virtual Node<T>* getNext() { return next; };
    
    virtual void display() const {
        std::cout << "\n" << data;
    };
protected:
	T data;
	Node<T>* prev;
    Node<T>* next;
};
