#ifndef DATA_STRUCTURES_STACK_H
#define DATA_STRUCTURES_STACK_H

#include <memory>

template <class T>
class stack_linked_list {

    struct node {
        T data;
        std::unique_ptr<node> next;
    };

public:
    stack_linked_list() : top(nullptr) {}

    T pop() {
        T tmp = top->data;
        top = std::move(top->next);
        return tmp;
    }

    void push(T item) {
        auto n = std::make_unique<node>(item, move(top));
        top = move(n);
    }

    bool empty() {return top == nullptr;}

private:
    std::unique_ptr<node> top;
};

#endif //DATA_STRUCTURES_STACK_H