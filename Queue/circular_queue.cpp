#include <bits/stdc++.h>
using namespace std;

class CircularQue
{

    // data menember
    int *arr;
    int size;
    int front;
    int rear;

    // constructor
    CircularQue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Operaiotns ..

    bool Enqueue(int value)
    {

        //  checking that the queue is full or not
        //  first condtion front at starting and rear at end
        if ((front == 0 && rear == size - 1) || rear == (front - 1) % (size - 1))
        {
            return -1;
        }

        else
        {
            // second condition
            if (front == -1)
            {
                front = rear = -1;
                arr[rear] = value;
            }
            // cyclic Nature
            else if (rear == size - 1 && front != 0)
            {
                rear = 0;
                arr[rear] = value;
            }
            else
            {
                // Normal flow
                rear++;
                arr[rear] = value;
            }
            return true;
        }
    }

    // DQueue operation..
    int Dqueue()
    {
        //   checking that the queue is emopty or not
        if (front == -1)
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;

        // only signal element
        if (front == rear)
        {
            front = rear = -1;
        }

        //  cylic Nature.
        else if (front == size - 1)
        {
            front = 0;
        }

        // Normal flow;
        else
        {
            front++;
        }
        return ans;
    }
};

int main()
{

    return 0;
}