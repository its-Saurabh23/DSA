// To get the poer of any Number 
 #include<iostream>
 using namespace std;
 int main(){
 	int n,pow,flag = 1;
 	cout<<"Enter a Number"<<endl;
 	cin>>n;
 	cout<<"Enter the Power of Number"<<endl;
 	cin>>pow;
 	
 	for(int  i=1; i<=pow; i++){
 	    flag = flag*n;
	 }
	 cout<<"Value is "<<flag;
 	
 	return 0;
 }
