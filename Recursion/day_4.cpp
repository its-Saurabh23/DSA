#include<bits/stdc++.h>
using namespace std;
/*
void reverse(string &str,int i,int j){
    // basae case 
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    // Recusive call
  reverse(str,i,j);
}


bool checkpalindrome(string str,int i,int j){

    // base case 

    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        // Recursive call
      return checkpalindrome(str,i+1,j-1);
    }
}


int power(int a,int b){

    // base case

    if(b==0){
        return 1;
    }
    if (b ==1){
        return a;
    }
    // recurance relation
    int ans = power(a,b/2);
    // if b is even
    if(b%2==0){
      return  ans*ans;
    }
    else{
        // if b is podd
        return a *ans;
    }
}


// Bubble sort

 void sortArray(int *arr,int n){
    // base case 
    if(n ==0 || n ==1){
        return ;
    }

    for(int i =0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
//  Recusive call
    sortArray(arr,n-1);
 }

*/
int main(){

    
      /*
  int  arr[5]={2,5,1,6,9};
  sortArray(arr,5);
  for(int i =0; i<5; i++){
   cout<<arr[i]<<" ";
  }
 
    int a,b;
    cin>>a>>b;
    int ans = power(a,b);

    cout<<"ans is "<<ans<<endl;
   
    string str = "abbac";
 bool ans = checkpalindrome(str,0,str.length()-1);
    
    if(ans){
        cout<<"It is A palendrome "<<endl;
    }
    else{
        cout<<"it is Not a plaindrome "<<endl; 
    }
  
    
string str = "abcd"; 
reverse(str,0,str.length()-1);
cout<<str<<endl;
*/
    return 0;
    
}