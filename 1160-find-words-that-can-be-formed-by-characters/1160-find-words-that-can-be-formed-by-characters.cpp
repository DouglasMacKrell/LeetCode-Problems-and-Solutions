class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> charBank;
        for (char ch : chars) {
            if (charBank[ch]) {
                charBank[ch] += 1;
            } else {
                charBank[ch] = 1;
            }
        }
        int result = 0;
        map<char, int> copyBank;
        for (string word : words) {
            copyBank = charBank;
            if (validateAnagram(copyBank, word)) {
                result += word.size();
            }
            copyBank.clear();
        }
        return result;
    }
    bool validateAnagram(map<char, int> obj, string str) {
        for (char ch : str) {
            if (obj[ch]) {
                obj[ch] -= 1;
            } else {
                return false;
            }
        }
        return true;
    }
};


