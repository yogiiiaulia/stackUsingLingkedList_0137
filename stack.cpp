#include <iostream>
using namespace std;

//stack  single linklist 

class Node
{
public:
int data;
Node *next;

Node()
{
    next = NULL;
}
};

//stack class
class Stack
{
private:
    Node *top; //pointer to the top node of stack

public:
    Stack()
    {
        top = NULL; //initialize the stack with a null top pointer
    }

    //push operation: insert an element into the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // allocate memory for the new node
        newNode->data = value; // assign value
        newNode->next = top; // set next pointer of the new node to the current
        top = newNode;// update the top pointer to the new node
        cout << "Push value : " << value << endl;
        return value;
    }
    
    //isempty operation : Check if stack is empty
    bool isEmpty()
    {
        return top == NULL;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack is Empty." << endl;
            return;
        }
        cout << "Popped value : "  << top->data << endl;
        top = top->next;
    }
// peek/top operation: retrieve the value of the topmost element without removing it
    void peek()
    {
        if(isEmpty())
        {
            cout << "Stack is Empty." << endl;
            return;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " "  << endl;
                current = current->next;
            }
            cout << endl;
        }// return the value of the top node
    }

    
};
