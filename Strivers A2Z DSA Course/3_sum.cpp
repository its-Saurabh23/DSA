// Apply 2 sum problem logic..     
// 1 sort them
// fixed the first elemnt in the loop 
   //  then apply  2 sum logic to the other one loop (which is optimal for that problem)    

//      solution  

// sort them
   
 sort(nums.begin(),nums.end());

    // taking set for unique input 
     set<vector<int>>st;
     // ans vector
    vector<vector<int>>ans;
for(int i = 0; i<nums.size()-2; i++){
        // appluing 2 sum logic 
        int left = i+1;
        int right = nums.size()-1;

        while(left<right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == 0){  
               // inser into set 
               st.insert({nums[i],nums[left],nums[right]});
               left++;
               right--;
            }
            else if(sum<0){
                left++;
            }else{
                right--;
            }
    }      
    }       
// returning in the form fo question constrnt.that is 2 D   
    for(auto& it:st){
        ans.push_back(it);
    }
    return ans;  
    }
 
 