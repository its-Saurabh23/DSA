// #include<iostream>
// using namespace std;
// 
//void function();
// 
// int main(){
// 	
// 	function();
// 	return 0;
// }
// 
//void function(){
//	cout<<"Hello Function"<<endl;
//}

// parameters 

#include<iostream>
using namespace std;


// Deceleration
void function(string name,int age=0);

int main(){
	function("Rahul");
	return 0;
} 

// Function Defenation
void function(string name,int age){
	cout<<"Hello "<<name<<endl;
	if(age !=0){
	cout<<"My age is "<<age<<endl;
	}
}








