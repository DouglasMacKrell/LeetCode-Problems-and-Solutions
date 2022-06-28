class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s == "" && t == "") {
            return false;
        }
        if(s.size() > t.size() || s.size() < t.size()) {
            return false;
        }
        map<char, int> charBank = {};
        for (char ch : t) {
            if (charBank[ch]) {
                charBank[ch] += 1;
            } else {
                charBank[ch] = 1;
            }
        }
        for (char ch : s) {
            if (charBank[ch]) {
                charBank[ch] -= 1;
            } else {
                return false;
            }
        }
        return true;
    }
};