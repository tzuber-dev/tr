#include <string>

#include "link.hpp"



using namespace std;


class Node {



private:
    Link data;
    Node* next;

public:
   Node (Link data);
    Link getData();
    Node* getNext();

    void cometogether(Node* child);
};



class LinkList {


private:
    Node* head;




public:
    LinkList(Node* head);


    Node* getHead();

    void traversingaround();
};