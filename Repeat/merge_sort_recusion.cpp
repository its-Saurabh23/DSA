#include <bits/stdtr1c++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    //    copy value
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    //  merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }


while(index1<len1){
 arr[mainArrayIndex++] =first[index1++];
     
}
while(index2<len2){
 arr[mainArrayIndex++] =second[index2++];
     
}

}


void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    // left part sort
    mergeSort(arr, s, mid);
    // right part
    mergeSort(arr, mid + 1, e);

    // now Mearge
    merge(arr, s, e);
}

int main()
{
    int arr[10] = {2, 5, 1, 6, 10,1,1,1,1,2};
    int n = 10;

    mergeSort(arr, 0, n - 1);

for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}