#include <bits/stdc++.h>

using namespace std;

// [head] -> [d, p] -> [d,p] -> [d,p] -> [d, NULL]

class Node {
public:
    int Value;
    Node* Next;

    Node(int data){
        this -> Value = data;
        this -> Next = NULL;
    }
};

void printList(Node* n);
void insertAtHead(Node* &head, int d);
void insertAtTail(Node* &tail, int d);

int main(){

    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    printList(head);

    insertAtHead(head, 69);
    printList(head);

    insertAtTail(tail, 96);
    printList(head);

}

void printList(Node* n){
    while(n !=  NULL){
        cout << n-> Value << " -> ";
        n = n -> Next;
    }
    cout << "NULL" << endl;
}


void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> Next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> Next = temp;
    tail = tail -> Next;

}












