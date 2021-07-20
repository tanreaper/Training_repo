#include <iostream>
using namespace std;

struct Node {
    int num;
    Node * next;
};

Node * head = NULL;
Node * tail = NULL;

void createList(int n) {
    Node *temp = new Node();
    temp->num = n;
    temp->next = NULL;
    if ( head == NULL) {
        head = temp;
        tail = head;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void display() {
    Node *temp = head;
    while(temp!= NULL) {
        cout << temp->num;
        temp = temp->next;
        cout << temp << endl;
    }
    cout << temp;
}

int main() {
    int b = 2;
    int * a  = &b;
    // cout << *a;
    int arr[3] = {1, 2, 3};
    int *a1 = &arr[0];
    int i;
    for (i=0; i<4; i++) {
        createList(i);
    }
    // cout << a1 << endl;
    // cout << *(a1+1) << endl;
    // cout << *(a1+2) << endl;
    display();
    return 0;
}