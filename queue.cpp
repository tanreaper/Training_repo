// Implementation of queue using circular linked list

#include <iostream>
using namespace std;

struct Node {
    int num;
    Node *next;
    Node *prev;
};

Node *head = NULL;
Node *tail = NULL;
int counter = 0;

void enqueue(int data) {
    Node *temp = new Node();
    temp->num = data;
    temp->next = NULL;
    temp->prev = NULL;
    counter++;

    if (head == NULL) {
        head = temp;
        tail = temp;
    } else if (head == tail) {
        head->next = temp;
        head->prev = temp;
        temp-> next = tail;
        temp->prev = tail;
        tail = temp;
    } else {
        temp->next = head;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void display() {
    Node * temp = head;
    int i = 0;
    while (i < counter) {
        cout << temp->num << "->";
        temp = temp->next;
        i++;
    }
     cout << temp->num << "->";
     temp = temp->next;
     cout << temp->num;
     cout << endl;
}

int dequeue() {

    int deq_data;
    if (head == NULL) {
        cout << "list is emopty, cannot dequeue";
    } else {
        Node *temp = head->next;
        temp->prev = tail;
        tail->next = temp;
        deq_data = head->num;
        head = temp;
        counter--;
        return deq_data;
    }
    return deq_data;
}


int main() {

    enqueue(2);
    enqueue(3);
    enqueue(7);
    enqueue(10);
    enqueue(12);
    display();
    int deq_data = dequeue();
    cout << "item dequeued data -> " << deq_data << endl;;
    display();
    return 0;
}




