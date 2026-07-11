int binarySearch(int arr[],int low,int heigh,int target){
    
    if(low>heigh){
        return -1;
    }

    int mid = low + (heigh-low)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]>target){
     return binarySearch(arr,low,mid-1,target);
    }else{
      return binarySearch(arr,mid+1,heigh,target);
    }
    return -1;
}

int binarySearch(int arr[],int n,int target){
    int low = 0;
    int heigh = n -1; 
    
    while(low <= heigh){
        int mid = low + (heigh-low)/2;
        if(arr[mid] == target ){
            return mid;
        }
        else if(arr[mid]>target){
            heigh = mid-1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}
    #include<bits/stdc++.h>
    using namespace std;

    // int BinarySearch(vector<int>&V,int target,int start,int end){
    int BinarySearch(vector<int>&V,int target,int start,int end){

        if(start > end){
        //   return false;
        return -1;
        }
        // it is index
        int mid = start + (end-start)/2; 


        if(V[mid]== target){
            return mid;
        }else if(V[mid] >target){
            return BinarySearch(V,target,start,mid-1);
        }else if(V[mid]<target){
        return BinarySearch(V,target,mid+1,end);
        }
        // return false;
        return -1;
    }

    int main(){
        std::vector<int>V={1,2,3,4,5,6,7,8,9,10};
        int size = V.size();
        int target = 9;

        int index = BinarySearch(V,target,0,size-1);
        if(index != -1){
            std::cout << "Number is present at index " << index << std::endl;
        }else{
            std::cout << "Number is not present" << std::endl;
        }
        // bool isPresent = BinarySearch(V,target,0,size-1);
        // if(isPresent){
        //     std::cout << "Number is present" << std::endl;
        // }else{
        //     std::cout << "Number is not present" << std::endl;
        // }
        return 0;
    }
