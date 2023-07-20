#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {

        sum += i;
    }
    cout << sum << endl;

    /*
    int n =5;
    int i = 0;
    for(;;){

        if(i<=n ){
        cout<<i<<endl;
        }
        else{
            break;
        }

        i++;
    }




    int i = 7;

    cout<<(i++)<<endl;;
    cout<<(++i)<<endl;

    cout<<(i--)<<endl;
    cout<<(--i)<<endl;



    int a  = 2;
    int b = 4;

    cout<<(b<<2)<<endl;


    cout<<" "<< (a^b)<<endl;
    cout<<" "<< (a&b)<<endl;
    cout<<" "<< (a|b)<<endl;
    cout<<" "<< ~a <<endl;
    cout<<" "<< ~b<<endl;

    */
    return 0;
}
