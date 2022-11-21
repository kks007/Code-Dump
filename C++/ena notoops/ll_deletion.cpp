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
    ~ Node (){
        int value = this -> Value;
        if(this -> Next != NULL){
            delete Next;
            this -> Next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};

void printList(Node* n);
void insertAtHead(Node* &head, int d);
void insertAtTail(Node* &tail, int d);
void insertAtPosition(Node* &head, Node* &tail, int position, int d);
void deleteNode(int position, Node* &head);

int main(){

    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    printList(head);

    insertAtHead(head, 69);
    printList(head);    

    insertAtTail(tail, 96);
    printList(head);

    insertAtPosition(head, tail, 3, 22);
    printList(head);

    deleteNode(3, head );
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

// void insertAtPosition(Node* &head, int position, int d){
//     Node* temp = head;
//     int count = 1;

//     while(count < position - 1){
//         temp = temp -> Next;
//         count++;
//     }

//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> Next = temp -> Next;
//     temp -> Next = nodeToInsert;

// }

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    
    if(position == 1){ 
        //insetion at head
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> Next;
        count++;
    }

    if(temp -> Next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> Next = temp -> Next;
    temp -> Next = nodeToInsert;




}

void deleteNode(int position, Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head -> Next;
        delete head;
    }
    else {
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while (count <= position){
            prev = curr;
            curr = curr -> Next;
            count++;
        }

        prev -> Next = curr -> Next;
        delete curr;
    }
}













