// Leetcode
// 1480. Running Sum of 1d Array



class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
            nums[i] += nums[i-1];
        return nums;
    }
};




// Solution 2

class Solution {
public:
vector<int> runningSum(vector<int>& nums) {
        vector<int>runningsum;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            runningsum.push_back(sum);
        }
        return runningsum;
    }





// Solutions 3

class Solution {
public:
vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            nums[i]=sum;
        }
        return nums;
    }













