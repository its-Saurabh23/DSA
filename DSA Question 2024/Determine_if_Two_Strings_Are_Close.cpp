class Solution {
public:
    bool closeStrings(string word1, string word2) {
     int n1 = word1.size();
     int n2 = word2.size();

     if(n1 != n2 ){
         return false;
     }    
    
    vector<int>freq1(26);
    vector<int>freq2(26);

    // insert into vectors
    for(int i =0; i<n1; i++){
        char ch1 = word1[i];
        char ch2 = word2[i];

        int index1 = ch1 -'a';
        int index2 = ch2 -'a';
       
       freq1[index1]++;
       freq2[index2]++;
    }

    // step 2 check the every character presence int both word 1 and word2

    for(int i =0;i<26;i++){
        if(freq1[i] != 0 && freq2[i] != 0) continue;

        if(freq1[i] == 0 && freq2[i] == 0) continue;
        return false;
    }

    // main step frequency match 
    //    sort them 
    sort(begin(freq1),end(freq1));
    sort(begin(freq2),end(freq2)); 

    return freq1 == freq2;
  }
};

// T.C constant beacuse we are sorting only 26 word so..