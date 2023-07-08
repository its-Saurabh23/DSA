
#include <iostream>
using namespace std;

bool isPrime(int n){
  

    if (n <= 1) return false;
     

bool prime = true;
// for(int i = 2; i<n; i++){
for(int i = 2; i*i<n; i++){
    if(n%i == 0){
        prime = false;
    }

}
if(prime){
    return true;
}
else{
    return false;
}

}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "It  is Prime Number " << endl;
    }
    else
    {
        cout << "Not a Prime " << endl;
    }

    return 0;
}