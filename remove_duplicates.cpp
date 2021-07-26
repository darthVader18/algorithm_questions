#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}


void removeDuplicates(node* head) {
    node* temp = head;
    node* to_delete;

    if(temp == NULL) {
        return;
    }

    while(temp->next != NULL) {
        if(temp->data == temp->next->data) {
            to_delete = temp->next->next;
            free(temp->next);
            temp->next = to_delete;
        }
        else{
            temp = temp->next;
        }
    }
}

void display(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    node* head = NULL;

    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 9);
    insertAtHead(head, 7);
    insertAtHead(head, 7);
    insertAtHead(head, 7);
    display(head);
    removeDuplicates(head);
    display(head);


    return 0;
}

