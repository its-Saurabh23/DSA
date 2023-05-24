// HCF by Euclid Method;
 
//  Always remmenber that the effect when we subtract and modulo of the number never effect the gcd number of that integers;
//  whatever it is mionus or modulo;
#include <iostream>
using namespace std;

int HCF_Euclide(int a, int b)
{
    while (b != 0)
    {
        int reminder = a % b;
        a = b;
        b = reminder;
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter First integter "<<endl;
    cin>>a;
    cout<<"Enter Second integer "<<endl;
    cin>>b;
    cout<<HCF_Euclide(a,b)<<endl;

    return 0;
}