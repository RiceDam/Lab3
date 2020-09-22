//
// Created by Eric Dam on 2020-09-22.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP
class Stack {
    static constexpr int max = 10;
private:
    int arr[max];
    int ind;
public:
    Stack();
    bool push(int num);
    void pop();
    int top() const;
    bool empty() const;
    bool full() const;
    void print();
};
#endif //LAB3_STACK_HPP
