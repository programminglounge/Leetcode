#include <vector>
#include <iostream>
using namespace std;

int minSwap(vector<int> & nums1, vector<int>& nums2)
{
  int p = 0;
  int count = 0;
  for (int i = 0; i<nums1.size()-1; i++)
  {
    if ((nums1[i] < nums1[i+1]) && (nums2[i] <nums2[i+1])
    {
    }
    else if ((nums1[i] < nums1[i+1]) && (nums2[i]>nums2[i+1]))
    {
      if ((nums1[i] < nums2[i+1]) && (nums2[i] < nums1[i+1]))
      {
        //p = nums1[i+1];
        //nums1[i+1] = nums2[i+1];
        //nums2[i+1] = p;
        count++;
      }
    }
    
    else if ((nums1[i] > nums1[i+1]) && (nums2[i]<nums2[i+1]))
    {
      if ((nums2[i] < nums1[i+1]) && (nums1[i] < nums2[i+1]))
      {
        //p = nums1[i+1];
        //nums1[i+1] = nums2[i+1];
        //nums2[i+1] = p;
        count++;
      }
    }
    
  }
  return count;
}

int main ()
{
  vector<int> nums1 = {1, 2, 3, 8};
  vector<int> nums2 = {5, 6, 7, 4};
  cout << minSwap(nums1, nums2) << endl;

  nums1 = {1, 3, 5, 4};
  nums2 = {1, 2, 3, 7};
  cout << minSwap(nums1, nums2) << endl;
  
  nums1 = {0, 3, 5, 8, 9};
  nums2 = {2, 1, 4, 6, 9};
  cout << minSwap(nums1, nums2) << endl;
  
  return 0;

}
