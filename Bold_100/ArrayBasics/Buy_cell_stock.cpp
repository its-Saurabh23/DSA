#include<bits/stdc++.h>
using namespace std;

// O (n*n)
// int BestTimeToBuyCellStock(vector<int>&arr){
    
//     int maxProfit = 0;
//     int n = arr.size();
    
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             int profit = arr[j]- arr[i];
//             if(profit>maxProfit){
//                 maxProfit = profit;
//             }
//         }
//     }
//     return maxProfit;
// } 

// O(n)

int BestTimeToBuyCellStock(vector<int>&arr){
    
    int buy =arr[0];
    int max_profit = 0;

    for(int i = 0;i<arr.size(); i++){
        
        if(buy>arr[i]){
            buy = arr[i];
        }else{
             
            int cp = arr[i]-buy;
            max_profit  = max(max_profit,cp);
        }
    }
    return max_profit;
}


int main(){
    vector<int>arr = {7,1,5,0,4};
    int result = BestTimeToBuyCellStock(arr);
    cout<<result<<"\n";
    return 0;
}