#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {

            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// print row wise sum ke liye

void printSum(int arr[3][3], int row, int col)
{
    cout << " Printing sum -> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

// coloums wise sum ke liye

void printColSum(int arr[3][3], int row, int col)
{
    cout << " Printing sum -> " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

  // Largest RowSum;

    int largestRowSum(int arr[][3], int row, int col)
    {
        int maxi = INT16_MIN;

        int rowIndex = -1;
        for (int row = 0; row < 3; row++)
        {
            int sum = 0;
            for (int col = 0; col < 3; col++)
            {
                sum = arr[row][col];
            }

            if (sum > maxi)
            {
                maxi = sum;
                rowIndex = row;
            }
        }
        cout<<"The maximun sum is  "<<maxi<<endl;
        return rowIndex; 
    }

int main()
{

    // 2D array

    // row wise element are default;
    int arr[3][3];
    // int arr[3][4]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    // taking input ->row wise
    /*for(int i =0; i<3; i++){
        for(int j = 0; j<4;j++){
            cin>>arr[i][j];
        }
    } */

    // taking input coloum wise
    cout << "Enter the Elemets " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j][i];
        }
    }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
   /* cout << "Enter a Element to search " << endl;
    int target;

    cin >> target;

    if (isPresent(arr, target, 3, 3))
    {
        cout << "Emelent Fount " << endl;
    }
    else
    {
        cout << "Not Found " << endl;
    }
     
    printSum(arr, 3, 3);
    printColSum(arr, 3, 3);  */
    int ans = largestRowSum(arr,3,3);
    cout<<" MAx row ia at "<<ans<<endl;
    return 0;
}