#ifndef ACTIVATION_H
#define ACTIVATION_H

#include <cmath>

class Activation {
public:
static double sigmoid(double output){
return ((1)/(1 - exp(-output)));
}

static double tanh(double output){
double t1 = exp(output);
double t2 = exp(output*(-1.0));

    return ((t1-t2)/(t1+t2));

}

static double ReLU(double output){
return max(0, output);
}

static double LeakyReLU(double output, double alpha){
    if(output>0){
        return output;
    }
    return alpha*output;
}


static double elu(double output){
    double alpha = 0.001;
    if(output>0){
        return output;
    }
    return (alpha)*(exp(output) -1);
}

static double swish(double output){
    return output*sigmoid(output);
}

static double softmax(double output){
return 0.001;

//need to create
}

};

#endif
