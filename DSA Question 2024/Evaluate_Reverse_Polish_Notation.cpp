class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>st;
    for(string str : tokens){

        if(str == "+" || str == "-" || str == "*" || str == "/"){
            // determine top two element
            int val1 = st.top();
            st.pop();

            int val2 = st.top();
            st.pop();

            int ans;

            if(str == "+"){
                ans = val2 + val1;
            }
            else if(str == "-"){
                ans = val2 - val1;
            }
            else if(str == "*"){
                ans = val2 * val1;
            }
            else if(str == "/"){
                ans = val2 / val1;
            } 
            st.push(ans);
        }
        else
        {
            st.push(stoi(str));
        }
    }
    return st.top();
    }
};