#include<bits/stdc++.h>
using namespace std;

// #define PI 3.14


// global
int score =15;

void a(int& i )
{
    score++;
cout<<score<<endl;
    // b(i);
cout<<i<<endl;
}

void b(int& i)
{
cout<<i<<endl;
}
int main()
{
  
int i=5;
a(i);
b(i);
cout<<score<<endl;

  /*
{
    int i =2;
    cout<<i<<endl;
}
 
 int r = 5;
    // double pi= 3.14;
    double area = PI * r * r;
    cout<<"Area is "<<area<<endl;
    */

    return 0;
}