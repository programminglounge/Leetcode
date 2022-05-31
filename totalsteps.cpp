#include <iostream>
#include <vector>
using namespace std;

int totalSteps(vector<int>& nums) {
  vector<int> positions;
  for (int i=0; i<nums.size()-1; i++)
  {
    if (nums[i]>nums[i+1])
    {
      positions.push_back(i+1);
    }
  }
  if (positions.size() == 0)
  {
    return 0;
  }
  else
  {
    for (int i = 0; i<positions.size(); i++)
    {
      nums.erase(nums.begin()+positions[i]-i);
    }
    return 1+ totalSteps(nums);
  }
}

int main()
{
  vector<int> nums = {5, 3, 4, 4, 7, 3, 6, 11, 8, 5, 11};
  cout << totalSteps(nums) << endl;
  return 0;
}
