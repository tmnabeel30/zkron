#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <vector>   

class Perceptron {

    private:
        int n;
        vector<double> input(n,0);
        vector<double> weight(n,0);
        double bias;
    public:
        void newPerceptron(int size, vector<int> inputs, vector<int> weights){
            n = size;
            input = inputs;
            weight = weights;
        }
        double output(vector<double>input, vector<double>weight double bias){
        
                int ans = bias; 
                for (int i = 0; i < length; i++) {
                    ans += weights[i]*inputs[i];

                }

                return ans;

        }

};





