#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    for (int i = 1; i <= n; i++)
    {

        //   first triangle
        int cnt = 1;
        for (int j = 0; j <= n - i; j++)
        {
            cout << cnt;
            cnt++;
        }
        // star print kane hai"
        for(int k =1; k<i; k++){
            cout<<"*";
        }

        // another star
         for(int l =1; l<i; l++){
            cout<<"*";
        }
        //another triang;e pattern 
         int num = n-i+1;
        for(int m = 0; m <=n-i; m++){
            cout<<num;
            num--;
        }      

         cout << endl;
    }


    /*
    for(int i = 1; i<= n; i++){
        // rows ke liye

        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        int cnt = 1;
        for(int k = 1; k<=i; k++){
            cout<<cnt;
            cnt++;
        }
        // next triangle
          int num = 1;
        for(int l = 1; l<i; l++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }

    for(int i =1; i<=n; i++){
        // row ke liye

        for(int j =1; j<=n-i;j++){
            cout<<" ";
        }
            int cnt = i;
        for(int k = 1; k<=i; k++){
            cout<<cnt;
            cnt++;
        }cout<<endl;
    }

    for (int i = 1; i <= n; i++)
    {
        // row ke liye
        // int sapce = i-1;
        for (int j = 1; j <= i - 1; j++)
        {
            cout <<" ";
        }
        int cnt = i;
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout<<cnt;
            cnt++;
        }
        cout << endl;
    }


    //  row ke liye
    for (int i = 0; i <= n; i++)
    {
        // int space = n-i;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << i;
        }
        cout << endl;
    }



        for (int i = 1; i <= n; i++)
        {
            // row ke liye
            for (int j = 1; j <= i - 1; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <=n-i+1; k++)
            {
                cout <<i;
            }
            cout << endl;
        }
    */
    return 0;
}