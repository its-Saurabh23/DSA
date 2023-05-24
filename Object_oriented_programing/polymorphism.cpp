#include <bits/stdc++.h>

using namespace std;

class A
{

public:
   void sayHello()
   {
      cout << "Hello Love babbar" << endl;
   }

   int sayHello(string name,int n)
   {
      cout << "Hello Love babbar" << endl;
      return n;
   }
   void sayHello( string name)
   {
      cout << "Hello Love babbar"<<name << endl;
   }
};
int main()
{

   A obj;
   obj.sayHello();

   return 0;
}