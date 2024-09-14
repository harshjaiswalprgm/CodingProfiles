// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

// Example 1:

// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000
// Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
// Example 2:

// Input: nums = [5], k = 1
// Output: 5.00000



// #include<algorithm>
// using namespace std;
// #include<iostream>

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        for(int i =0; i<k; i++){
            sum = sum+nums[i];
        }

        int maxSum= sum;

        int startIndex = 0;
        int endIndex = k;

        while(endIndex < nums.size()){

            sum = sum - nums[startIndex];
            startIndex++;

            sum = sum + nums[endIndex];
            endIndex++;

            maxSum = max(maxSum, sum);


        }
        
        return (double)maxSum/k;
    }
};