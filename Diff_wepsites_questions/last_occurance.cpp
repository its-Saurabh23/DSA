#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n = 10;
  int arr[10];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "seacrch element " << endl;
  int x;
  cin >> x;
  int ans = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      ans = i;
    }
  }
  cout << "Index Number is " << ans << endl;
}