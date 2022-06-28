/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if(s == "" && t == "") {
        return false;
    }
    if(s.length > t.length || s.length < t.length) {
        return false;
    }
    let charBank = {};
    for (let ch of t) {
        if (charBank[ch]) {
            charBank[ch] += 1;
        } else {
            charBank[ch] = 1;
        }
    }
    for (let ch of s) {
        if (charBank[ch]) {
            charBank[ch] -= 1;
        } else {
            return false;
        }
    }
    return true;
};