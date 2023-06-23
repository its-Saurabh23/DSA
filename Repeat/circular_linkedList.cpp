#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    // cosntructor

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
        cout << "memeory is free for node with data" << value << endl;
    }
};
void insertNode(Node *&tail, int element, int d)
{

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
        // assuning that the element is present in the list

        Node *curr = tail;
        while (curr->data != element) {
            curr = curr->next;
             }

        // element foutn and curr is now at that node

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}


void print(Node* &tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<" Lis tis empty "<<endl;
        return ;
    }

  do{
    cout<<tail->data<<" ";
    tail = tail->next;
  }
  while(tail !=temp);
  cout<<endl;
}

void deletNode(Node* &tail,int value){

    // empty list
    if(tail == NULL){
        cout<<"Listn is Empty "<<endl;
         return;
    }

    else{
        // non-empty list
        // assuming that the value is present in the List

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data !=value){
           prev = curr;
           curr = curr->next;
        }
          
        prev ->next  = curr->next;

//  1 Node linked list
if(curr == prev){
    tail =NULL;
}
//   >2 list'
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}


int main()
{

    Node *tail = NULL;

    // empty list
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
     print(tail);
 /*
    insertNode(tail, 5, 7);
     print(tail);

    insertNode(tail, 7, 9);
     print(tail);

    insertNode(tail, 5, 6);
     print(tail);

    insertNode(tail, 9, 10);
     print(tail);
*/
    deletNode(tail,3);
    print(tail);
    return 0;
}