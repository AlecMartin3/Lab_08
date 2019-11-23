#include <iostream>
#include "Node.hpp"
#include "MyLinkedList.hpp"
template <class T, class DLL>
void printList(DLL &list){
    Node<T> *node = list.head;
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->link;
    }
    cout<< endl;
}

int main() {

    MyLinkedList<int> intList;
    intList.pushBack(3);
    intList.pushFront(1);
    intList.insert(intList.head, 2);
    printList<int, MyLinkedList<int>>(intList);

    MyLinkedList<string> stringList;
    stringList.pushBack("c");
    stringList.pushFront("a");
    stringList.insert(stringList.head, "b");
    printList<string, MyLinkedList<string>>(stringList);
}