#include<bits/stdc++.h>
using namespace std;


int& func(int a )
{
    int num =a;
    int& ans =num;
    return ans;
}


void update2(int& n)
{
    n++;
}


// pass by value
void update1(int n)
{
    n++;
}
int main(){

/*
int i=5;

// Reference variable
int& j =i;


cout<<i<<endl;
i++;
cout<<i<<endl;
j++;
cout<<i<<endl;

cout<<j<<endl;

*/

int n =5;
cout<<"Before value "<<n <<endl;

update2(n);
cout<<"After value "<<n<<endl;


// func(n);
    return 0;
}
