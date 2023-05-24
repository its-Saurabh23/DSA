#include <bits/stdc++.h>

// insertion at begnining
/*
  1. allocate a node
  Node* newNode = new Node()
  2. assign alliment
  newNode->data =newelemtn(these thing are given by the function)
  3 make next node of new node as head
  newNode-next= head;

  4. make new node as head;
  head = newNode;
*/
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkList
{

private:
    Node *head;

public:
    LinkList()
    {
        head = NULL;
    }

    // Adding element
    void push_fornt(int newElement)
    {
        Node *newNode = new Node();
        newNode->data = newElement;
        newNode->next = head;
        head = newNode;
    }

    // display the content
    void PrintList()
    {

        Node *temp = head;
        if (temp != NULL)
        {
            cout << " The List Contain: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        else
        {
            cout << "This list is empty ";
        }
    }
};

int main()
{
    
LinkList Mylsit;

Mylsit.push_fornt(10);
Mylsit.push_fornt(20);
Mylsit.push_fornt(30);
Mylsit.push_fornt(40);

Mylsit.PrintList();

    return 0;
}