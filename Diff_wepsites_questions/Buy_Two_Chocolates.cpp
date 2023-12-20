class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        int miniF = INT_MAX;
        int secM = INT_MAX;

        for(auto & price : prices){
               
               if(price<miniF){
                   secM = miniF;
                   miniF = price;
               }
               else{
                    secM = min(secM,price);
               }
        }

        if(miniF + secM > money){
            return money;
        }

        return money - (miniF + secM);

    }
};

// you can also do this with sorting but complexity is vary