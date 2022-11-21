#include <bits/stdc++.h>

using namespace std;

// [head] -> [d, p] -> [d,p] -> [d,p] -> [d, NULL]

class Node {
public:
    int Value;
    Node* Next;

};

void printList(Node* n);
void printAlt(Node* &head);

int main(){

    Node* head = new Node(); 
    Node* second = new Node();
    Node* third = new Node();

    head -> Value = 1;
    head -> Next = second;
    second -> Value = 2;
    second -> Next = third;
    third -> Value = 3;
    third -> Next = NULL;

    printList(head);

}

void printList(Node* n){
    while(n !=  NULL){
        cout << n-> Value << endl;
        n = n -> Next;

    }
}

void printAlt(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> Value << " ";
        temp = temp -> Next;
    }
}
