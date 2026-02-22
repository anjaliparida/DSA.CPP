#include <iostream>
using namespace std;

class node{
public:
    int data;// it stores the data part of the node
    node* next;// it stores the address of next node here next is a pointer of type node

    node(int val) {// constructor
        data = val;// initializing data part with val(value passed while creating the object of node class)
        next = NULL;// initializing next part with NULL( we alway set next to NULL when we create a new node) (its also called as terminating condition)
    }
};

class list{
    node* head;// head pointer to point to the first node of the linked list(it helps us to traverse the linked list from starting)
    node* tail;// tail pointer to point to the last node of the linked list (it helps us to add new node at the end of linked list in O(1) time)


    public:
    list() {// constructor
        head = NULL;// initializing head to NULL 
        tail = NULL;// initializing tail to NULL
    }   
};
int main() {
node n1(10);// creating a node object n1 with data 10
cout<< n1.data << endl;// accessing data part of n1 and printing it 
return 0;
}