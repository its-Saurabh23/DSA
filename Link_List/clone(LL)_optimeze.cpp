/*
private:
// insertion at Tail Function.
Node *insetAtTail(Node *&head, Node *&Tail, int d)
{

    Node *newNode = new Node(d);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next;
        tail = newNode;
    }
}

public:
Node *copyList(Node *head)
{
    // step 1 create clone Node

    Node *cloneHead = NULL;
    Node *cloneTail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {

        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    // step 2 add clone lsit in original list

    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while (originalNode = !NULL && cloneHeada != NULL)
    {
        Node *next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

        //   for clone node that means next is updated..
        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }
    // step 3 random ponter
    temp = head;

    while (temp != NULL)
    {
        if (temp->next != NULL)
        { 
            if(temp->random !=NULL){
 
            temp->next->random = temp->random->next;
            }
            else{
                temp ->next = temp ->random;
            }
        }
        temp  =temp->next;
    }
// step 4 revert the changes step 2
   
   originalNode = head;
   cloneNode = head;

   while(original !=NULL && cloneNode !=NULL){
 
    originalNode->next = cloneNode->next;
    originalNode = original->next;

    if(original->next !=NULL){
      cloneNode->next = originalNode->next;
    }
    cloneNode = cloneNode->next; 
   }

// return ans
return cloneHead;
}

*/