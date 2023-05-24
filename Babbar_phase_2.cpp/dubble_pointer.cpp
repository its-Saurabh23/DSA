#include<bits/stdc++.h>
using namespace std;

/*int f(int x, int *py,int **ppz)
{
    int y,z;
    **ppz += 1;
    z =**ppz;
    *py +=2;
    y = *py;
    x += 3;
    return x+y+z;

}
*/

void increment(int **p)
{
    (**p)++;
}

void update(int **p2)
{

// no change
// p2 = p2+1;


// change hoga..YES
// *p2 =*p2+1;

// change Hoag .. YES 
// **p2 = **p2+1;
}
int main(){
/*
int i =5;
int *p = &i;

int **p2 =&p;


cout<<endl<<endl<<"Sab sahi chal rha hai"<<endl<<endl;

 cout<<" printing p "<<p<<endl;

// cout<<"address of p "<<&p<<endl;

cout<<*p2<<endl;

cout<<i<<endl;
cout<<*p <<endl;
cout<<**p2<<endl;


cout<<&i<<endl;
cout<<p<<endl;
cout<<*p2<<endl;

cout<<&p<<endl;
cout<<p2<<endl;


cout<<endl<<endl;
cout<<"before "<<i<<endl;
cout<<"before "<<p<<endl;
cout<<"befroe "<<p2<<endl;
update(p2);
cout<<"after "<<i<<endl;
cout<<"after "<<p<<endl;
cout<<"after "<<p2<<endl;
cout<<endl<<endl;


  

//   MCQ
int fisrt =8;
int second = 18;
int *ptr =&second;
*ptr = 9;
cout<<fisrt<<" "<<second<<endl;




int first  =6;
int *p =&first;
int *q = p;
(*q)++;
cout<<first<<endl;


int first = 8;
int *p = &first;
cout<<(*p)++<<" ";
cout<<first<<endl;



// Segmentation Falut 
int *p = 0;
int first = 110;
*p = first;
cout<<*p<<endl;



int first  = 8;
int second = 11;
int *third = &second;
first = *third;
*third = *third + 2;
cout<<first<<" "<<second<<endl; 



float f =  12.5;
float p = 21.5;
float *ptr = &f;
(*ptr)++;
*ptr = p;
cout<<*ptr<<" "<<f<<" "<<p <<endl;


int arr[5];
int *ptr;
cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;


int arr[]={11,21,13,14};
cout<<*(arr)<<" "<<*(arr+1)<<endl;


int arr[6]={11,21,13};
cout<<(arr+1)<<endl;


int arr[6]={11,21,31};
int *p = arr;
cout<<p[2]<<endl;


int arr[]={11,12,14,14,15};
cout<<*(arr)<<" "<<*(arr + 3);


// We are incrementing the symbol table this is not possible ..

int arr[] = {11,21,31,42};
int *ptr = arr++;
cout<<*ptr<<endl;

char ch ='a';
char *ptr = &ch;
ch++;
cout<<*ptr<<endl;
 


int first = 110;
int *p = &first;
int **q = &p;
int second = (**q) + 9;
cout<<first <<" "<<second<<endl; 


int first =100;
int *p = &first;
int **q =&p;
int second = ++(**q);
int *r = *q;
++(*r);
cout<<first<<" "<<second<<endl;



int c,*b,**a;
c =4;
b =&c;
a =&b;
cout<<f(c,b,a);


int ***r,**q,*p,i = 8;
p =&i;
(*p)++;
q = &p;
(**q)++;
r =&q;
cout<<*p<<" "<<**q<<" "<<***r;

*/
int num =10;
int *ptr = &num;

increment(&ptr);
cout<<num<<endl;

    return 0;
}
