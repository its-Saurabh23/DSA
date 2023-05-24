#include <bits/stdc++.h>
using namespace std;
int TwoSum(int arr[], int target)
{
//   int size = sizeof(arr)/sizeof(arr[0]);
 int size =  arr.size()
    for (int i = 0; i < size; i++)
    { 
        for (int j = i + 1; j < size; j++)
        {
            if(arr[i]+arr[j] == target){
                cout<< i<<" " <<j<<endl;
            }
        }
    }
}

int main()
{
    int arr[4] = {1, 3, 3, 4};
    int target = 5;
    int size = 4;
    TwoSum(arr,target);
    return 0;
}