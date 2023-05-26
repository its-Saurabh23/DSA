#include<iostream>
using namespace std;
int number;
int fact( int number){
	if(number == 0)
	{
	 return 1;
	}
	fact =fact*(number-1);
}
int main(){	
	cout<<"Enter a number";
	cin>>number;  
	cout<<fact(number)<<endl;
		
	return 0;
}

