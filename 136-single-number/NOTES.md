This problem spurred me to learn about XOR with my mentor!

This is not a faster solution, which means LeetHub won't save my work to this repo. However, I did want to save this solution here for postierity!

## In C++
```
class Solution {
public:
    int answer = 0;
    for(auto const& digit: nums)
    {
        answer^=digit;
    }
    return answer;
};
```


## In JavaScript
```
var singleNumber = function(nums) {
    let answer = 0;
    for (let digit of nums) {
        answer ^= digit;
    }
    return answer;
};
```
