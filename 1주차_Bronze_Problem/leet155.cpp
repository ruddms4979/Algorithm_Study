#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class MinStack {
public:
    vector< pair<int, int> > stackVector;


    MinStack() {
        
        stackVector.clear();
        
    }
    
    void push(int val) {
        
        if (this->getMin() > val) stackVector.push_back(make_pair(val, val));
        else stackVector.push_back(make_pair(val, this->getMin()));
   
    }
    
    void pop() {
        
        if (!stackVector.empty()) stackVector.pop_back();

    }
    
    int top() {
        
        if (!stackVector.empty()) return stackVector.back().first;
        else return NULL;

    }
    
    int getMin() {
        
        if (!stackVector.empty()) return stackVector.back().second;
        else return INT_MAX;
        
    }
};
