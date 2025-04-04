#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <vector>
#include "Activation.h"

class Sequential {

private:
    int n;
    std::vector<double> input;
    std::vector<double> weight;
    double bias;

public:
    void newPerceptron(int size, std::vector<double> inputs, std::vector<double> weights, double b) {
        n = size;
        input = inputs;
        weight = weights;
        bias = b;
    }

    double output() {
        double ans = bias;
        for (int i = 0; i < n; i++) {
            ans += weight[i] * input[i];
        }
        return Activation::sigmoid(ans);
    }

    
    double output(int actFunc) {
        double ans = bias;
        for (int i = 0; i < n; i++) {
            ans += weight[i] * input[i];
        }
        switch (actFunc) {
            case 1:
                return Activation::sigmoid(ans);
            case 2:
                return Activation:: tanh(ans);
            case 3:
                return Activation:: ReLU(ans);
            case 4:
                return Activation:: LeakyReLU(ans);
            case 5:
                return Activation:: elu(ans);
            case 6:
                return Activation:: swish(ans);
            case 7:
                return Activation:: softmax(ans);
            default:
                return Activation::sigmoid(ans);
                break;
        }
    }
};

#endif
