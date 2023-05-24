#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){



vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(6);
v.push_back(7);


cout<<"Finding Element  6 "<<binary_search(v.begin(),v.end(),6)<<endl;

cout<<" Lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
cout<<"Upper bound "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
int a =3;
int b = 5;

cout<<"Max "<<max(a,b)<<endl;

cout<<"min "<<min(a,b)<<endl;
swap(a,b);
cout<<"a "<<a<<endl;
 
 string abc="abc";
 reverse(abc.begin(),abc.end());
 cout<<"String -> "<<abc<<endl;
 

rotate(v.begin(),v.begin()+1,v.end());
cout<<"After rotate "<<endl;
for(int i:v){
    cout<<i<<" ";
} cout<<endl;

cout<<"sort "<<endl;

sort(v.begin(),v.end());

for(int i: v){
    cout<<i <<" ";
}cout<<endl;

  return 0;
}