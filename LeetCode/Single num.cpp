
// 136. Single Number
// Leetcode


// 0 XOR n = n (or) n XOR 0 = n

// Consider example 1: I/P - [2,2,1]
// Intially, we have res assigned to 0.
// Iteration 1: Begin - i = 0, res = 0, num[0] = 2; End - res = 0 XOR 2 = 2;
// Iteration 2: Begin - i = 1, res = 2, num[1] = 2; End - res = 2 XOR 2 = 0;
// Iteration 3: Begin - i = 2, res = 0, num[2] = 1; End - res = 0 XOR 1 = 1; This is our result.

// Consider example 2: I/P - [4,1,2,1,2]
// Intially, we have res assigned to 0.
// Iteration 1: Begin - i = 0, res = 0, num[0] = 4; End - res = 0 XOR 4 = 4;
// Iteration 2: Begin - i = 1, res = 4, num[1] = 1; End - res = 4 XOR 1 = 5;
// Iteration 3: Begin - i = 2, res = 5, num[2] = 2; End - res = 5 XOR 2 = 7;
// Iteration 4: Begin - i = 3, res = 7, num[1] = 1; End - res = 7 XOR 1 = 6;
// Iteration 5: Begin - i = 4, res = 6, num[2] = 2; End - res = 6 XOR 2 = 4; This is our result.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i<nums.size(); i++) {
            res ^= nums[i];
        }
        return res;
    }
};