#include <string>
#include "hello.hpp"
#include <iostream>;
using namespace std;



Node::Node(Link data) : data(data) {
    this->next = nullptr;
};


Link Node::getData() {
    return this->data;
};

Node* Node::getNext() {
    return this->next;
};


void Node::cometogether(Node *child) {
    this->next = child;

};


LinkList::LinkList(Node* head) {
this->head = head;
};


Node* LinkList::getHead() {
    return this->head;
};


void LinkList::traversingaround() {
    Node* temp = this->head;
    while (temp != nullptr) {
        std::cout<<temp->getData().get_material()<<std::endl;
        temp = temp->getNext();
    };
};


