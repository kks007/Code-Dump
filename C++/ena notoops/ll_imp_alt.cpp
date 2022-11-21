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

int main(){

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head -> Next = second;
    second -> Next = third;
    third -> Next = NULL;

    printList(head);

}

void printList(Node* n){
    while(n !=  NULL){
        cout << n-> Value << endl;
        n = n -> Next;

    }
}