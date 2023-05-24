#include<bits/stdc++.h>

using namespace std;


void RotateArray(int arr[],int N)
{
    int temp[N];
    for(int i = 0; i<N; i++)
    {
         arr[i]>>1;
    }
    for(int i = 0; i<N; i++)
    {
        cout<<" "<<arr[i];
    }

}
int main()
{ 

    int arr[5]= {1,2,3,4,5};
    int  N=5;
    RotateArray(arr,N);
   

/*
void rotate(int arr[], int n)
{
    vector<int>v;
    v.push_back(arr[n-1]);
    
    for(int i =0; i<n; i++ )
    {
        v.push_back(arr[i]);
    }
    for(int i =0;i<n; i++)
    {
        arr[i] = v[i];
    }
}
 */
    return 0;
}