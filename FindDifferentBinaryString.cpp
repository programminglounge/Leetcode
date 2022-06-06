#include <iostream>
#include <vector>
using namespace std;

string findDifferentBinaryString(vector<string> & nums)
{
  vector<int> nums_equalized;
  int result = 0; 
  const int length = nums[0].size();
  for (int i = 0; i<nums.size(); i++)
  {
    int number = stoi(nums[i], nullptr, 2);
    nums_equalized.push_back(number);
  }
  sort(nums_equalized.begin(), nums_equalized.end());
  for (int i = 0; i<nums.size(); i++)
  {
    int answer = nums_equalized[i];
    if (i != answer)
    {
       string binary("");
        int mask = 1;
        for (int i = 0; i<length; i++)
        {
          if ((mask&i) >= 1)
            binary = "1"+binary;
          else
            binary = "0" + binary;
          mask <<=1;
        }
        return binary;
    }
  }
  return "";
}
int main()
{
  vector<string> nums = {"111", "011", "001"};
  cout << findDifferentBinaryString(nums) << endl;
  nums = { "00", "01"};
  cout << findDifferentBinaryString(nums) << endl;
  nums = {"01", "10"};
  cout << findDifferentBinaryString(nums) << endl;
  return 0;
}
