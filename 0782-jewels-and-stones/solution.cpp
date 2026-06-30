class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int a =0;
       for( auto i : jewels){
        for( auto s : stones){
            if(i == s ) a++;
        }
       }
       return a;
    }
};