/**
 * @param {string} s
 * @param {string} p
 * @return {number[]}
 */
var findAnagrams = function(s, p) {
    let masterBank = {};
    let currSubStr = {};
    for (let ch of p) {
        if (masterBank[ch]) {
            masterBank[ch] += 1;
        } else {
            masterBank[ch] = 1;
        }
    }
    for (let i = 0; i < p.length; i++) {
        if (currSubStr[s[i]]) {
            currSubStr[s[i]] += 1;
        } else {
            currSubStr[s[i]] = 1;
        }
    }
    let rPointer = p.length - 1;
    let result = [];    
    for (let j = 0; j <= s.length - p.length; j++) {
        
        if (isEqual(masterBank, currSubStr)) {
            result.push(j);
        }
        rPointer += 1;
        currSubStr[s[j]] -= 1;
        if (currSubStr[s[rPointer]]) {
            currSubStr[s[rPointer]] += 1;
        } else {
            currSubStr[s[rPointer]] = 1;
        }
    }
    return result;
};

function isEqual(obj1, obj2) {
    for (let key in obj1) {
        if (obj1[key] != obj2[key]) {
            return false;
        }
    }
    return true;
}