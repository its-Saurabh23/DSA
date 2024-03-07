#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:

int length;

public:
Rectangle(){
    length = 10;
}
//friend function
friend int printLength(Rectangle);

};
int printLength(Rectangle b){
b.length += 10;

return b.length;
}
int main(){
Rectangle b;
cout<<"Length of Rectangle: "<<printLength(b)<<endl;
return 0;

}