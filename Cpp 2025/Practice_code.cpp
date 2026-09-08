//Basic Question


bool PalinDrome(string str){
    
    int start = 0;
    int end = str.length()-1;

    while(start<end){
         if(str[start] != str[end]){
            return false;
         }
         start++;
         end--;
    }
    return true;
}

bool numberPalindrome(int x){

    if(x<0){
        return false;
    }

    int original = x;
    long long  reversed = 0;

    while(x>0){
        int digit = x%10;
        reversed = reversed*10 + digit;
        x/=10;
    }
    return original == reversed;
}

pair<int,int>firstMaximumSecondMaximum(int arr[], int n){
     int first_maximum  = INT_MIN;
     int second_maximum = INT_MIN;

     for(int i = 0; i<n; i++){
         
        if(arr[i]>first_maximum){{
            second_maximum = first_maximum;
            first_maximum = arr[i];
        }else if(arr[i]>second_maximum && arr[i]  != first_maximum){
            second_maximum = arr[i];    
        }
        
     }
        return {first_maximum,second_maximum};
    }
}

pair<int,pair<int,int>>firstMinimumSecondMinimumThirdMinimum(int arr[],int n){
   
   int first_maximum = INT_MIN;
   int second_maximum = INT_MIN;
   int third_maximum = INT_MIN;

   for(int x :arr){
    if(x > first_maximum){
        third_maximum = second_maximum;
        second_maximum = first_maximum;
        first_maximum = x; 
    }else if(x > second_maximum && x != first_maximum){
          third_maximum = second_maximum;
          second_maximum = x;
    }else if(x > third_maximum  && x != first_maximum && x != second_maximum){
       third_maximum = x;
    }
   }
   return {first_maximum,{second_maximum,third_maximum}};

}

int fibonacci(int n){

    if(n<=1)return n;
    
    int a = 0;
    int b = 1;
    
    for(int i = 2; i<=n; i++){
        int c = a+b;
        a = b;
        b = c;
    }
    return b;
}

int fibonacciRecursion(int n){
    if(n<=1)return n;
    return fibonacciRecursion(n-1)+ fibonacciRecursion(n-2);
}

int binarySearch(vector<int>&arr,int target){

    int start = 0;
    int end = arr.size()-1;

    while(start <= end){

        int mid = start +(end-start)/2;
        
        if(arr[mid] == target){
            return mid;
        }
        
        if(arr[mid] > target){
            end = mid-1;
        }else{
           start = mid+1;
        }
    }
    return -1;

}

