//
// Created by Eric Dam on 2020-09-22.
//

#include <string>
#include <iostream>
#include "stack.hpp"
using namespace std;

Stack::Stack() {
    ind = -1;
}
bool Stack::push(int num) {
    if (ind != max - 1)
        return false;
    else {
        arr[++ind] = num;
        return true;
    }
}

void Stack::pop() {
    ind--;
}

int Stack::top() const {
    return arr[ind];
}

bool Stack::empty() const {
    return ind == -1;
}

bool Stack::full() const {
    return ind == max-1;
}

void Stack::print() {
    string s = "";
    for (int i = ind; i >= 0; i--) {
        s += to_string(arr[ind]) + " ";
    }
    cout << s;
}

