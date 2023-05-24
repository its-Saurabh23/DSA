#include<iostream>
using namespace std;


int n =0;
int fun(n){
	if(n ==4){
		return;
	}
cout<<n;
n++;
fun();
};
 int main(){
 	fun(n);
 	return 0;
 }

