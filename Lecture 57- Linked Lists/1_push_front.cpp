#include<iostream>
using namespace std;

class Node{
  public:
    int data ; 
    Node* next ; 

    Node(int val){
        data = val ; 
        next = NULL ; 
    }

};

class List{
    Node* head  ; 
    Node* tail ; 

public:
    List(){
        head = tail = NULL ; 
    }
    void push_front(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = tail = new_node ; 
            return ; 
        }else{
            new_node -> next = head ; 
            head = new_node ; 
        }
    }

    void printLL(){
        Node* temp = head ; 
        while(temp != NULL){
            cout<<temp -> data <<" " ; 
            temp = temp -> next ; 
        }
        cout<<endl ; 
    }
};

int main()
{
    List ll ; 
    ll.push_front(1); 
    ll.push_front(2); 
    ll.push_front(3); 
    ll.printLL() ; 
    return 0;
}