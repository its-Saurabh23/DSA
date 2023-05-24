#include<iostream>
using namespace std;

int LCM(int n1,int n2){
   int i;
    for (i = 1; i <=n1*n2; i++)
    {
        if (i%n1 == 0 && i%n2==0)
        {
            cout<<"LCM is = "<<i<<endl;
            break;
        }
        
    }
    
}


int main(){
int n1,n2;
cout<<"Enter the First integer "<<endl;
cin>>n1;
cout<<"Enter the second integer "<<endl;
cin>>n2;
LCM(n1,n2);

return 0;
}