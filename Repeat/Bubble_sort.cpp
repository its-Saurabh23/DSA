#include <iostream>
using namespace std;

void bubble_sort(int *arr, int n)
{
    int i,j;
    for (i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j + 1],arr[j]);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
}
int main()
{
    int n = 5;
    int arr[n] = {3, 1, 2, 5, 4};

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}