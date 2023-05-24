// Exclusion ,inclusion Principal
#include<iostream>
using namespace std;

int divisal(int n,int a,int b){
    int c1 =n/a;
    int c2 =n/b;
    int c3 =n/(a*b);

    return c1+c2-c3;
}
int main(){

int n,a,b;
cout<<"Enter  Number up to which you wnat the divisal coutn "<<endl;
cin>>n;
cout<<"Enter the first Number "<<endl;
cin>>a;
cout<<"Enter Secnd Number "<<endl;
cin>>b;

 int result =divisal(n,a,b);
 cout<<" Divisal count is = "<<result<<endl;
return 0;
}