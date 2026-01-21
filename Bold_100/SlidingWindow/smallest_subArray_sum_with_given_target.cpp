
int solve(vector<int>&arr,int target){
    if(target == 0){
        return 1;
    }
    
    int currentWindowSum = 0;
    int minimumWindow = INT_MAX;
    int startingWindow = 0;
    
    for(int windowEnd = 0; windowEnd<arr.size(); windowEnd++){
        currentWindowSum += arr[currentWindowSum];
        
        while(currentWindowSum>= target){
            minimumWindow = min(minimumWindow,windowEnd - startingWindow + 1);
            currentWindowSum -= arr[startingWindow];
            startingWindow = startingWindow + 1;
        }
    }
    return minimumWindow;
}

int main()
{
   vector<int>arr={4,2,2,7,8,1,2,10};
    int target = 8;
    int result = solve(arr,target);
    cout<<result;
   
    return 0;
}