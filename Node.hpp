//
// Created by Alec on 2019-11-22.
//


#ifndef LAB08_NODE_HPP
#define LAB08_NODE_HPP

#include <iostream>
using namespace std;

template <class T>
struct Node {
public:
    T data;
    Node* link;

    ~Node(){
        delete(link);
    }

};


#endif //LAB08_NODE_HPP
