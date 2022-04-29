
/*

Q.   Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]


Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


*/


//
//
//------------------
// SOLUTION #1
//------------------
//
//


#include<bits/stdc++.h>

using namespace std;

//  Two pointer solution

/* To implement this techniques array should be sorted then point front to begging of the array & rear to end of the array. 
Loop through array until front less than rear. 
Sum up array[front] + array[rear] and check if it matches to target we are looking for.
*/


vector<int> twoSum(vector<int>& nums, int target) 
{
    int front = 0, rear = nums.size() - 1;
    
    sort(nums.begin(), nums.end());
    
    while(front < rear)
    {
      int sum = nums[front] + nums[rear];

      if (sum == target)
        break;
      else if (sum > target)
        rear--;
      else
        front++;
    }
    return {front, rear};
};



//
//
//------------------
// SOLUTION #2
//------------------
//
//




//Brute Force Solution


vector<int> twoSum(vector<int>& nums, int target) 
{
    int len = nums.size();
    for(int i = 0; i < len; i++) 
    {
        for(int j = i + 1; j < len; j++) 
        {
            if(nums[j] == target - nums[i])
                return { i, j };
        }
    }
    return {-1, -1};     //Leetcode needs return at end  .  does not mean anything
};




//
//
//------------------
// SOLUTION #3
//------------------
//
//



// Hash Map Solution


vector<int> twoSum(vector<int>& nums, int target) 
{
      map<int, int> map;
      vector<int> pairs;
      for(int i = 0; i < nums.size(); i++) 
      {
          int complement = target - nums[i];
          if(map.find(complement) != map.end()) 
          {
              pairs.push_back(map.find(complement)->second);
              pairs.push_back(i);
              break;
          }
          map.insert(pair<int, int>(nums[i], i));
      }
      return pairs;
};

int main() 
{
  vector<int>nums = {1,4,3,6,5,8};
  vector<int>pair = twoSum(nums,4);
  cout << "pair indices are : " << pair[0] << " " << pair[1] << endl;
  return 0;
}

















