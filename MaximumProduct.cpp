#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int maximumProduct (vector <int> & nums, int k)
{
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i<nums.size(); i++)
  {
    pq.push(nums[i]);
  }
  if (nums.size() != 0)
  {
    for (int i = 0; i<k; i++)
    {
      int s = pq.top();
      pq.pop();
      pq.push(s+1);
    }
    int sum = 1;
    for (int i = 0; i<nums.size(); i++)
    {
      int s = pq.top();
      pq.pop();
      sum = sum * s;
    }
    return sum;
  }
  return 0;
}


int main()
{
  vector<int> nums = {6, 3, 3, 2};
  cout << maximumProduct(nums, 2) << endl;
}
