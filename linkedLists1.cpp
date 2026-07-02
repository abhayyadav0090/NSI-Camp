// 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

struct Node{
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};



int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    Node* temp = head;

    temp->next = second;
    second->next = third;

    cout << "Linked List: " << temp->data;
    while(temp != NULL){
        temp = temp->next;
        cout << "->" << temp->data;
        
    }

    // cout << "Linked List: " << head->data << " -> " << second->data << " -> " << third->data << endl;

    return 0;
}