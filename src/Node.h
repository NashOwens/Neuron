
class Node {
public:
	inline Node(double data) : data(data) {};
	inline ~Node() {};

	void setData(double newData);
	double inline getData() { return data; }

	void setLink(Node* newLink);
	inline Node* getLink() { return link; }
private:
	double data;
	Node* link;
};
