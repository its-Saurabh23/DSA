#include<bits/stdc++.h>

using namespace std;

/*
void reacghHome(int src, int dest){

cout<<"Source "<<src<<" Destination "<<dest<<endl;
// base case 
if(src == dest){
    cout<<"Reach Home "<<endl;
    return; 
}

// Procesin 
src ++;
reacghHome(src,dest);
}

int fibo(int n ){

// basse case
 if(n == 0){
    return 0;
 }
 if(n ==1){
    return 1;
 }

//  Recurance Relation will be
  return  fibo(n-1)+fibo(n-2);



int stair(int nStair){
    // base case 
    if(nStair <0){
        return 0;
    }
    if(nStair ==0){
        return 1;
    }

    // Recurance Realtion
    return stair(nStair-1)+stair(nStair-2);

}}*/

void sayNumber(int n,string arr[] ){
    // base case
    if(n == 0){
        return;
    }
 // processing
 int digit  = n%10;
 n = n/10; 
//  Recursive call
 sayNumber(n,arr);

cout<<arr[digit]<<endl;
  

}
int main(){  
     string arr[10]={"Zero","one","two","three","fout"
     ,"five","six","seven","eight","nine"}; 
    int n;
    cin>>n;
    cout<<endl;
    sayNumber(n,arr);
    cout<<endl;

     /*

int nStair;
cin>>nStair;
int ans =  stair(nStair);
cout<<" Ams "<<ans<<endl;


// Fib o F(n) = F(n-1)+F(n-2);
int n ;
cin>>n;
int ans = fibo(n);
cout<<" ans "<<ans<<endl;
int destination =10;
int src =1;
cout<<endl;
reacghHome(src,destination);

*/






return 0;
}