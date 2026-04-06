#include<bits/stdc++.h>
using namespace std;
int main(){

// create Queue


queue<int>q;

q.push(11);
cout<<"fornt of q is "<<q.front()<<endl;
q.push(15);
cout<<"fornt of q is "<<q.front()<<endl;
q.push(13);
cout<<"fornt of q is "<<q.front()<<endl;

cout<<"Size of queue is "<<q.size()<<endl;

q.pop();
q.pop();
q.pop();
cout<<"After the first pop(),size will be "<<q.size()<<endl;

if(q.empty()){
    cout<<"Queue is empty "<<endl;
}
else{
    cout<<"Queue id not empty "<<endl;
}
return 0;
}



#include<bits/stdc++.h>
using namespace std;

class Qu {
public:
    int *arr;
    int front, rear, size;

    // Constructor
    Qu(int s) {
        size = s;
        arr = new int[s];
        front = 0;
        rear = -1;
    }

    // Enqueue
    void enQ(int val) {
        if (rear == size - 1) {
            cout << "Queue is full" << endl;
            return;
        }
        rear++;
        arr[rear] = val;
        cout << val << " inserted" << endl;
    }

    // Dequeue
    void deQ() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front] << " removed" << endl;
        front++;
    }

    // Display
    void display() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Qu q(5);

    q.enQ(10);
    q.enQ(20);
    q.enQ(30);

    q.display();

    q.deQ();
    q.display();

    return 0;
}
