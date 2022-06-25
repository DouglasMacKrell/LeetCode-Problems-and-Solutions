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
        for (string word : words) {
            map<char, int> copyBank;
            copyBank = charBank;
            if (validateAnagram(copyBank, word)) {
                result += word.size();
            }
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


