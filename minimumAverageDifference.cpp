#include<iostream>
#include <vector>
#include <bits/stdc++.h>

int findsum (int start, int finish, vector<int>& nums)
{
  int sum = 0;
  for (int i = start; i<=finish; i++)
  {
    sum = sum + nums[i];
  }
  return sum;
}
int minimumAverageDifference(vector<int>& nums)
{
  for (int i = 0; i<nums.size(); i++)
  {
    int result = 0;
    int second = 0;
    int first = 0;
    first = findsum(0, i, nums)/(i+1);
    if (i != nums.size()-1)
    {
      second = findsum(i+1, nums.size()-1, nums)/(nums.size()-(i+1))
    }
    else
    {
      second = 0;
    }
    if (first>second)
    {
      result = first-second;
      results.push_back(make_pair(result, i));
    }
    else
    {
      result = second - first;
      results.push_back(make_pair(result, i));
    }
  }
  sort(results.begin(), results.end());
  return results[0].second;
}

int main()
{
  vector <int>nums = {2, 5, 3, 9, 5, 3};
  count << minimumAverageDifference(nums) << endl;
  
  vector <int>nums2 = {0};
  count << minimumAverageDifference(nums2) << endl;
}
