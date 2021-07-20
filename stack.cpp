// implementation of stack using circular linked list.
#include <iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;
Node *tail = NULL;
int counter = 0;

void push(int num) {
    Node *temp = new Node();
    temp->next = NULL;
    temp->prev = NULL;
    temp->data = num;
    cout << temp << endl;
    counter++;

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else if (head == tail)
    {
        head->next = temp;
        head->prev = temp;
        temp->next = tail;
        temp->next = tail;
        tail = temp;
    }
}

void display(){
    Node * temp = head;
    int i = 0;
    // while (i < count) {
    //     cout << temp->data << "->";
    //     i++;
    // }
}


    // void pop(){

    //     if ( head == NULL ) {
    //         cout << empty
    //     } else {
    //         Node *temp = head->next;
    //         head->next = temp;
    //         head->prev = tail;
    //         pop = head->data;
    //         head = temp;
    //         return pop;

    //     }
    //     {
    //         /* code */
    //     }

    // }

    // }

int main() {
    push(2);
    push(3);
    push(5);
}
