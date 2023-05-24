// HCF Program;

#include<iostream>
using namespace std;

int Hcf(int n1,int n2){
    int i;
    for ( i = n1; i <=n1*n2; i--)
    {
        if (n1%i==0 && n2%i==0)
        {
            cout<<"HCF is = "<<i<<endl;
            break;
        }
        
    }
    
}
int main(){
int n1,n2;
cout<<"Enter first integer value "<<endl;
cin>>n1;
cout<<"Enter second integer value "<<endl;
cin>>n2;
Hcf(n1,n2);
return 0;
}