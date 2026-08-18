#include<bits.stdc++.h>
using namespace std;

int first_largest(const vector<int>arr){
    if(arr.size() == 0)return 0;

    int maximum = INT_MIN;
   for(int i =0; i<arr.size(); i++){
 
     if(arr[i]>maximum){
        maximum = arr[i];
     }
   }
}

pair<int,int> first_largest_second(const vector<int>&arr){
     if(arr.size() < 2)return pair<int,int>;

     int first_largest = INT_MIN;
     int second_largest = INT_MIN;

     for(int i =0;i<arr.size(); i++){

        if(arr[i]>first_largest){
            second_largest = first_largest;   // at very first itration first minimum will get INT_MIN  from frist largest 
            first_largest = arr[i];
        }else if(arr[i]>second_largest && arr[i] != first_largest){
            second_largest = arr[i];
        }
     }
     return {first_largest,second_largest};
}


pair<int,pair<int,int>>first_largest_second_third_largest(const vector<int>& arr){
     
    if(arr.size()<3) return pair<int,pair<int,int>>;
    
    int f_l = INT_MIN;
    int s_l = INT_MIN;
    int t_l = INT_MIN;

    for(int i= 0;i<arr.size(); i++){

        if(arr[i]>first){
          t_l = s_l;
          s_l = f_l;         //[1,2,3,4];
          f_l = arr[i];  
    
        }else if(arr[i] > s_l && arr[i] != f_l){   // means it have two possibilites to become second largest and thirs largest.
            t_l = s_l;
            s_l =arr[i];   
        }else if(arr[i]>t_l && arr[i] != s_l && arr[i] != f_l){
            t_l = arr[i];
        }
    }
    return {f_l, {s_l,t_l}};
   
}

vector<int>first_to_fourth_largest(const vector<int>arr){   // vector<int>  no itration you can directly access the index;
    if(arr.size<4){
        return {};
    }

    int first_l = INT_MIN;
    int second_l = INT_MIN;
    int third_l = INT_MIN;
    int fourth_l = INT_MIN;

    for(int num:arr){
        if(num>first_l){
            fourth_l = third_l;
            third_l = second_l;
            second_l = first_l;
            first_l = num;
        }else if(num>second_l && num != first_l){
            fourth_l = third_l;
            third_l = second_l;
            second_l = num;
        }else if(num>third_l && num != first_l && num != second_l){
            fourth_l = third_l;
            third_l = num;
        }else if(num>fourth && num != first_l && num != second_l  && num != third_l){
            fourth_l = num;
        }
    }

    return {first_l,second_l,third_l,fourth_l};
}
 

int main(){

    vector<int>arr={1,2,3,4};
    int ans = first_largest(arr);
    std::cout<<ans<<" ";

    pair<int,int>ans2 = first_largest_second(arr);
    std::cout<<ans2.first<<" "<<ans2.second<<std::endl;

    auto ans3 = first_largest_second_third_largest(arr);

    std::cout<<"First_larget"<<ans3.first<<std::endl;
    std::cout<<"Second_largest"<<ans3.second.first<<std::endl;
    std::cout<<"Third_largest"<<ans3.secon.second<<std::endl;

   vector<int>res = first_to_fourth_largest(arr); 
    std::cout<<"First_larget"<<res[0]<<std::endl;
    std::cout<<"Second_largest"<<res[1]<<std::endl;
    std::cout<<"Third_largest"<<res[2]<<std::endl; 
    std::cout<<"Fourth_largest"<<res[4]<<std::endl; 
    
    return 0;
}
