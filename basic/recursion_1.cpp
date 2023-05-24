 #include<iostream>
 using namespace std;
 void fun(){
 	cout<<"Hello";
    fun();
 }
 int main(){
 	
 	fun();
 	return 0;
 }
// Recursion without termination.

