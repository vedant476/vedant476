class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
for (auto w : patterns) {
        if (word.find(w) != string::npos) {
            count++;
        }
    }
    return count;
    }
};