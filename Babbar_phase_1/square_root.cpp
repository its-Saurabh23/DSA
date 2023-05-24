#include<iostream>
using namespace std;

long long int binarySearch(int n){
 int s =0;
 int e =n;
 long long int mid = s+(e-s)/2;
 int ans = -1;
while(s<=e){
  
  long long int square= mid*mid;

 if (square == n)
 {
    return mid;
 }
 if (square<=n)
 {
    ans =mid;
    s =mid+1;
 }
 else{
    e =mid -1;
 }
 mid = s+(e-s)/2;
}
 return ans;

}

double morePrecision(int n ,int precision ,int result){
double factor = 1;
double ans = result ;
for(double i =0; i<precision; i++){
factor = factor/10;
for(double j =ans ; j*j<n; j =j+factor ){
    ans = j;
 }
}
return ans;

}

int main(){
 int n = 37;
long long int result = binarySearch(n);

cout<<"Sqaure root of given  Number is = "<<morePrecision(n,3,result)<<endl;
return 0;
}