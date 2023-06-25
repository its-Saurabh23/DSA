/*
#include <bits/stdc++.h> 

void sortedInsert(stack<int>&s,int num){

	if(s.empty() || (!s.empty() && s.top()<num)){
		s.push(num);
		return;
	}

	int n = s.top();
	s.pop();
	// recuseive call
	sortedInsert(s,num);
	s.push(n);
	
}
void sortStack(stack<int> &stack)
{
	// base case
	if(stack.empty()){
		return;
	}
 
   int num = stack.top();
   stack.pop();

   sortStack(stack);
//    left store element in num
// now sort the element which are left
   sortedInsert(stack,num);

}

*/