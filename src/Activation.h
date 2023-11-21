#include <cmath>
#include <functional>
#include <string>

class Activation
{
public:
    //2.71828;
    static constexpr float e=2.71828; 

    static float BinaryStep(float x) {
        return x >= 0.0 ? 1.0 : 0.0;
    }

    static float Linear(float x) { return x; };

    static float Sigmoid(float x) {
        return 1/1+std::pow(Activation::e,-x);
    }

    static float Tanh(float x) {
        float numer = std::pow(e, x) - std::pow(e, -x);
        float denom = std::pow(e, x) + std::pow(e, -x);
        return numer/denom;
    }

    static float Activate(std::string type, float x) {
        if (type == "binary") return BinaryStep(x);
    }
};
