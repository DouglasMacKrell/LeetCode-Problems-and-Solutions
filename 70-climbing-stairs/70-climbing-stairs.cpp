class Solution {
public:
    int climbStairs(int n) {
        int num1 = 0;
        int num2 = 1;
        int sum;
        for (int i = 0; i < n; ++i) 
        {
            sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }
        return num2;
    }
};
