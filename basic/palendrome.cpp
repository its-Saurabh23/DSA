//Palendrome
#include<iostream>
using namespace std;
int main(){
    int n,r,result = 0;

	cout<<"Enter a Number to check wether a number is plandrome or not "<<endl;
	cin>>n;
	int temp = n;
	while(n>0)
	{
		if(result<INT16_MAX/10){
		r =  n%10;
	    result =(result*10)+ r;
		n=n/10;
		}
	}
	if(temp == result){
		cout<<"plaendrome"<<endl;
	}
	else{
		cout<<"Not ";
	}
 
	return 0 ;
}
