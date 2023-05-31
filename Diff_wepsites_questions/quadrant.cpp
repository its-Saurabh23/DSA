#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
int x,y;
cin>>x;
cin>>y;

if(x ==0 && y==0){
    cout<<"Origin";
}
else if(x==0){
    cout<<"y axis";
}
else if(y==0){
    cout<<"x axis";
}
else if(x>0 && y>0){
    cout<<"1st Quadrant";
}
else if(x>0 && y<0){
    cout << "4th Quadrant";
}
else if(x <0 and y<0){
        cout << "3rd Quadrant";
    }
    else {
        cout << "2nd Quadrant";
    }
    return 0;
}