class Solution {
public:
    string toLowerCase(string s) {

        for(char &chars: s)
        {
            if(chars!=' ')
            chars=tolower(chars);
        }
        return s;
        
    }
};