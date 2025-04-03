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
        void newPerceptron(int size, vector<int> inputs, vector<int> weights, double bias){
            n = size;
            input = inputs;
            weight = weights;
            bias = bias;
        }
        double output(){
        
           double ans = bias; 
                
                for (int i = 0; i < length; i++) {
                    ans += weight[i]*input[i];

                }

                return ans;

        }

};


Perceptron p = new Perceptron();
p.newPerceptron(3, {1,2,3,4}, {2,3,1}, 3);

double o1 = p.output();




