/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    let sortedWords = {};
    strs.forEach((word, ind) => {
        let sWord = word.split('').sort().join('');
        if (sortedWords[sWord]) {
            sortedWords[sWord] = [...sortedWords[sWord], ind];
        } else {
            sortedWords[sWord]= [ind]
        }
    })
    let result = [];
    for(let key in sortedWords) {
        let subResult = [];
        for (let ind of sortedWords[key]) {
            subResult.push(strs[ind]);
        }
        result.push(subResult);
    }
    return result;
};

