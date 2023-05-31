#include <bits/stdc++.h>
using namespace std;

// step 1 Creation.
struct Node
{
    int data;
    Node *next;
};

class LinkList
{

private:
    Node *head;

    // step 2;
    // Adding element
public:
    LinkList()
    {
        head = NULL;
    }
    void push_front(int newElemtn)
    {
        Node *newNode = new Node();
        newNode->data = newElemtn;
        newNode->next = head;
        head = newNode;
    }
    // display The Link List
    void PrintList()
    {
        Node *temp = head;
        if (temp != NULL)
        {
            cout << "This List is Contain ";

            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "This List is Empty ";
        }
    }
};

int main()
{
    LinkList myList;
    myList.push_front(10);
    myList.push_front(20);
    myList.push_front(40);
    myList.push_front(50);
    myList.PrintList();

    return 0;
}