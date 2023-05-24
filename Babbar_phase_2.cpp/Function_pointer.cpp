#include<bits/stdc++.h>
using namespace std;

void print(int *p)
{
    // address of that pointer
    cout<<p<<endl;
    // for value
    cout<<*p<<endl;
}


void update (int *p)
{
    // p =p+1;
// cout<<"inside "<<p<<endl;
// value will updated 
*p = *p +1;
}

// int getSum(int *arr,int n ) also work.
int getSum(int arr[],int n )
{

    cout<<"Size : "<<sizeof(arr)<<endl;
    int sum =0;
    for(int i =0; i<n; i++){
        sum += i[arr];
    }
    return sum;
}

int main()
{

/*
int value = 5;
int *p = &value;

// print(p);

cout<<"Before "<<*p<<endl;
update(p);
cout<<" Ater "<<*p<<endl;
*/

int arr[6]={1,2,3,4,5,8};
cout<<"Sum is  " <<getSum(arr+3,3)<<endl;
    return 0;
}