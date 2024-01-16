class RandomizedSet {
    set<int>st;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
            if(st.find(val) != st.end()){
                return false;
            }
            st.insert(val);
            return true;
    }
    
    bool remove(int val) {
           if(st.find(val) == st.end()){
               return false;
           }  

           st.erase(val);
            return true;
           
    }
    
    int getRandom() {
        int randomIndex = rand() % st.size();
        return  *next(st.begin(), randomIndex);

    }
};