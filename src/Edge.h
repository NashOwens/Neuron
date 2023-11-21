template<class T>
class Edge : public Node<T> {
public:
    Edge<T>(T data, float weight) : weight(weight), prev_weight(0.0) {};

    inline float getWeight() { return weight; };
    inline void setWeight(float newWeight) { weight = newWeight; };

    inline float getPrevWeight() { return prev_weight; };
    inline void setPrevWeight(float weight) { prev_weight = weight; }; 

private:
    float weight;
    float prev_weight;
};
