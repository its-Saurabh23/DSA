#include <iostream>
using namespace std;

class Node
{

public:
  int data;
  Node *next;

  // constructor

  Node(int d)
  {
    this->data = d;
    this->next = NULL;
  }

  ~Node()
  {
    int value = this->data;
    if (this->next != NULL)
    {
      delete next;
      next = NULL;
    }
    cout << "memory is free for node with data " << value << endl;
  }
};

void insetNode(Node *&tail, int element, int d)
{
  // assume that the element is present in the list

  // empty list
  if (tail == NULL)
  {
    Node *newNode = new Node(d);
    tail = newNode;
    newNode->next = newNode;
  }
  else
  {
    // non empty list
    // assuming that the element is present in the list
    Node *curr = tail;

    while (curr->data != element)
    {
      curr = curr->next;
    }

    // element found
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}

void print(Node *tail)
{
  // Empty  List
  if (tail == NULL)
  {
    cout << "List is Empty" << endl;
    return;
  }
  Node *temp = tail;
  // empty list
  do
  {
    cout << tail->data << " ";
    tail = tail->next;
  } while (tail != temp);
  cout << endl;
}

void deleteNode(Node *&tail, int value)
{
  //  empty list
  if (tail == NULL)
  {
    cout << "Lsit is empty, please check agin" << endl;
    return;
  }
  else
  {
    // non -empty

    // assumoing that the "value" is present in the Linked List

    Node *prev = tail;
    Node *curr = prev->next;

    while (curr->data != value)
    {
      prev = curr;
      curr = curr->next;
    }

    prev->next = curr->next;

    //   1 Node Linked List
    if (curr == prev)
    {
      tail = NULL;
    }

    // Node 2 Linked List
    if (tail == curr)
    {
      tail = prev;
    }
    curr->next = NULL;
    delete curr;
  }
}
int main()
{
  Node *tail = NULL;

  insetNode(tail, 5, 3);

  print(tail);


    insetNode(tail,3,5);

    print(tail);
  /*
    insetNode(tail,5,7);

    print(tail);

    insetNode(tail,7,9);
    print(tail);

    insetNode(tail,5,6);
    print(tail);

     */

  deleteNode(tail, 3);
  print(tail);

  return 0;
}