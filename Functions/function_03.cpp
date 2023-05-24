 #include<iostream>
 using namespace std;
// Function overloading

int sum(int number1,int number2){
	return(number1+number2);
}
double sum(double number1,double number2){
	return(number1+number2);
}
 int main(){
 	double number1,number2;
 	
//	cout<<"Enter two Number"<<endl;
// 	cin>>number1;
// 	cin>>number2;
// 	cout<<sum(2.3,2)<<endl; Ambigiou Error
    cout<<sum(2,2)<<endl;
 	return 0;
 }
