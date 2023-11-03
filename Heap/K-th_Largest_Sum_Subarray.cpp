
//using min heap;
// space is reduced

#include<bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{
    priority_queue<int,vector<int>,greater<int>>mini;
    int n = arr.size();
	
	for(int i = 0 ; i <n; i++){
		int sum = 0;
		for(int j = i; j<n; j++){
			sum+= arr[j];
			
		 if(mini.size()<k){
			mini.push(sum);
		 }
		 else{

            if(sum > mini.top()){
				mini.pop();
				mini.push(sum);
			} 
		 }
		}
	} 
	return mini.top();

}





// T.C O(N2)
//A.S O(N2)
#include<bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{
	// generate all the subArry
    int n = arr.size();
	vector<int>ans;

	for(int i = 0; i<n; i++){
		int sum = 0;
		for(int j = i; j<n;j++){
         sum = sum + arr[j];

		 ans.push_back(sum);
		}
	}
	//sort ans;
     sort(ans.begin(),ans.end());

	// ans will be
	 
	return ans[ans.size()-k];

}