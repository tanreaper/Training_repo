/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    // cout << temp << endl;
    counter++;
    cout<<counter<<endl;

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
       
    } else {
        // Just add third condition
    }
}


void display()
{
    struct Node* temp;
 
    // Check for stack underflow
    if (head == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = head;
         int i = 0;
        while (i<counter)
        {
 
            // Print node data
            cout << temp->data << "-> ";
 
            // Assign temp link to temp
            temp = temp->next;
             i++;
         }
         
   
    }
}



   
int main() {
    push(2);
    push(3);
    push(5);
    push(6);
    display();
}
