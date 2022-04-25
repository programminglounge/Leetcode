#include <iostream>
#include <vector>

using namespace std;

vector<int> countSmaller (vector<int>& nums) {
  vector<int> result;
  int count = 0;
  if (nums.size()==1) {
    result.push_back(0);
    return result;
  }
  for (int i = 0; i<nums.size(); i++) {
    int x = nums[i];
    for (int j = i+1; j<nums.size(); j++) {
      if (x < nums[j]) {
        count++;
      }
    }
    result.push_back(count);
    count = 0;
  }
  return result;
}

int main()
{
  vector<int> x = {10, 2, 3, 5, 8, 2, 3};
  vector<int> y = countSmaller(x);
  for (int i = 0; i<y.size(); i++)
  {
    cout << y[i] << endl;
  }
}
