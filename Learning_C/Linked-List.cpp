#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data ){
            this->data = data;
            this->next = nullptr;
        }

};


class List {
public:
    Node* head ;

    List() {
        head = nullptr;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        // check (is LInked LIst empty ?)
        // yes empty
        if(head == nullptr) {
            head = newNode;
        }else {
            newNode->next = head;
            head = newNode;
        }
    }


    void printLinkedList() {
        Node* temp = head; // because we should not change the head

        while(temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push_back(int val){
        Node* newnode = new Node(val);
        if(head==nullptr){
            head = newnode;
        }
        else{
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp-> next;
            }
            temp->next = newnode;
        }
    }
    
    void pop_back(){
        if(head == nullptr){
            cout << "ll is empty"<<endl;
            return ;   
        }
        if(head->next == nullptr){
            head= nullptr;
            return;
        }
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp ->next;
        }
        temp->next = nullptr;
    }


};
int main() {
    List ll;

    ll.push_front(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(24);
    ll.push_back(2);
    ll.pop_back();
    ll.pop_back();
    ll.pop_back();
    // ll.pop_back();
    
    ll.printLinkedList();
    return 0;
}