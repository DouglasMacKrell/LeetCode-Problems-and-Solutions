/**
 * @param {string[]} words
 * @param {string} chars
 * @return {number}
 */
var countCharacters = function(words, chars) {
    let charBank = {};
    for (ch of chars) {
        if (charBank[ch]) {
            charBank[ch] += 1;
        } else {
            charBank[ch] = 1;
        }
    }
    let result = 0;
    for (let word of words) {
        let copyBank = Object.assign({}, charBank);
        if (validateAnagram(copyBank, word)) {
            result += word.length;
        }
    }
    return result;
};

function validateAnagram(obj, str) {
    for (let ch of str) {
        if (obj[ch]) {
            obj[ch] -= 1;
        } else {
            return false;
        }
    }
    return true;
}