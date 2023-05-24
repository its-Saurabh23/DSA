// Program to print 1 to n number with the help of recursion.

#include<iostream>
using namespace std; 
int i =1;
int fun(int n){
	if(i<=n){
    cout<<i<<endl;	
	}

i++;
fun(n);
}

int main(){
	int n;
	cin>>n;
	fun(n);
	return 0;
}
