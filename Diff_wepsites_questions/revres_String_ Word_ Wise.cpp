#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
     stringstream s(input);

    //   To store individual words
     string word;
    //  empty strig;
     string reverseString="";

    //  reverse
    while(s>>word){
        reverseString = word+" "+reverseString; 
    }
    reverseString = reverseString.substr(0,reverseString.length()-1);

    return reverseString;
}
int main()
{
    string s;
    cin>>s;
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}