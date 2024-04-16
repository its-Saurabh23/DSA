 #include<iostream>
 using namespace std;
 // Function with return statement
 
 bool isPrimeNumber(int number){
// bool isPrime=true;
 	for(int i = 2; i<number; i++){
 		if(number % i == 0)
 		 return false;
// 		{
        
// 			isPrime=false;
// 			break;
//		 }
	 }
//	 return isPrime;
    return  true;
 }
 int main(){
 	
 	for(int i =1; i<100; i++){
 		bool isPrime = isPrimeNumber(i);
 		if(isPrime)
 		cout<<i<<" is prime Number"<<endl;
	 }
 	
// 	int number;
// 	cout<<"Enter a number:"<<endl;
// 	cin>>number;
// 	bool isPrime = isPrimeNumber(number);
// 	
//	if(isPrime)
//	 	cout<<"Number is Prime"<<endl;
//	else
//	    cout<<"Given number is not a Prime number"<<endl;
	 
 	return 0;
 }
