#include<bits/stdc++.h>
using namespace std;

/*bool isPrime (int n ){
    
    if(n<=1)
    {
        return false;
    
    }
    
    for(int i = 2; i<n; i++ )
    {
        if(n%i ==0)
        {
            return false;
        }
    }
    return true;
}
*/

int main(){

     
//  seive of eratoenes
int n = 0;
int count = 0;
vector<bool> prime(n+1,true);
prime[0] = prime[1] = false;

for(int i =2;i<n; i++)
{
    if(prime[i])
    {
        count++;
    }
    for(int j = 2 *i;j<n; j=j+i)
    {
        prime[j] = 0;
    }
}
return count;

/* int n;
cin>>n;
if(isPrime(n))
{
    cout<<"It is Prime Number "<<endl;
} 
else{
    cout<<"It is not a prime Number "<<endl;
} 
*/
    return 0;
}