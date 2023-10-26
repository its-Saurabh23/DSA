/*
General Syntax of these Questions By Aditya Vema Sir 

Data_Type  Function_Name(root_Node, &Resultant_variable){

     Base case
     if(root == NULL){
        return 0; // or depending on the type of Function
     }

    Hypothesis  with Recusive call
    int L = Function_Name(root->left,Resultant_variable);
    int R = Function_Name(root->right,Resultant_variable);

     Induciton  part

    There are 3 variables 
    int temp = max(if the current root want to become the answer)
    int ans = max(temp , relation or clculation part) // if the temo is not the answer  
    
    res = max(temp,res);

    return temp;  
}
*/
class Solution {
public:
    
    int solve(TreeNode* root, int &res){
    // base case 
    if(root == NULL){
       return 0;
    }
      // Hypothesis
      int L = solve(root->left,res);
      int R = solve(root->right,res);

      // Induction 
      int temp = max(max(L,R)+root->val,root->val);
      int ans = max(temp,L+R+root->val);
      res = max(res,ans);

      return  temp;
    }
    int maxPathSum(TreeNode* root) {
     int res = INT_MIN;
     solve(root,res);
     return res;   
    }
};