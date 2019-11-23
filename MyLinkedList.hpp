//
// Created by Alec on 2019-11-22.
//

#ifndef LAB08_MYLINKEDLIST_HPP
#define LAB08_MYLINKEDLIST_HPP

#include <iostream>
#include "Node.hpp"
using namespace std;


template <class T>
class MyLinkedList{
public:
    Node<T> *head;
    MyLinkedList(){
        head = NULL;
    }
    ~MyLinkedList(){
        delete(head);
    }
    void pushFront(T new_data);
    void pushBack(T new_data);
    void insert(Node<T> *prevNode, T new_data);
};
template <class T>
void  MyLinkedList<T>:: pushFront(T new_data){
    Node<T> *new_node = new Node<T>();
    new_node->data = new_data;
    new_node->link = head;
    head = new_node;
};
template <class T>
void  MyLinkedList<T>:: pushBack(T new_data){
    Node<T> *new_node = new Node<T>();
    new_node->data = new_data;
    new_node->link = NULL;
    Node<T> *last = head;
    if(head == NULL){
        head = new_node;
        return;
    }
    while (last->link != NULL){
        last = last->link;
    }
    last->link = new_node;
    return;
};
template <class T>
void  MyLinkedList<T>::insert(Node<T> *prevNode, T new_data) {
    if (prevNode == NULL)
    {
        cout<<"the given previous node cannot be NULL";
        return;
    }
    Node<T> *new_node = new Node<T>();
    new_node->data = new_data;
    new_node->link = prevNode->link;
    prevNode->link = new_node;
};


#endif //LAB08_MYLINKEDLIST_HPP
