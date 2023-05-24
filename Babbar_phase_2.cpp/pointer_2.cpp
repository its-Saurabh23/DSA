#include<bits/stdc++.h>
using namespace std;

int  main(){
 
//  Pointer to int is created and poiting to some garbage address

//    int *p  = 0;

    /* cout<<*p<<endl;
    int i = 5;
    int *q = &i;
    cout<<q<<endl;
    cout<<*q<<endl;

  int *p = 0;
  p = &i;

  cout<<p <<endl;
  cout<<*p<<endl;

int num = 5;
int a = num;
a++;
cout<<num;


int *p =&num;
cout<<" Before "<<num<<endl;

(*p)++;
cout<<" After "<<num<<endl;

// coping a pointer..
int *q = p;
cout<<" value of p "<<p<<endl;
 
cout<<*p<<" - "<< *q <<endl;
*/
// important concept 

int i = 3 ;
int *t =&i;
 
// cout<<" value of i  "<<(*t)++<<endl;

*t= *t +1;
cout<<" before t "<<t<<endl;
t = t+1;
cout<<" after t "<<t<<endl;
 
    return 0;
}