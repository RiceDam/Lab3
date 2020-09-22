//
// Created by Eric Dam on 2020-09-22.
//

#include "stack.hpp"

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



