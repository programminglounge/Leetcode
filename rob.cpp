// in order to solve this problem I am using a greedy approach where
// each house is sorted based on the nums value stored in them

//in order to do this I make a new vector called vect. Each element
// of vect is a pair, where the first element is the nums value and the second is the index of the house

// I also have another vector called places which stores the values zero and one 
//(zero meaning the house at index i has not been robbed)

//Then I use the sort built in function of c++, to sort the homes in increasing order based on their num value
//Finally I check to make sure the left and right side of that house is zero (zero meaning it has not been robbed) 

int rob(vector <int> & nums) {
  long long sum = 0;
  vector<pair<int, int>> vect;
  vector<int> places (nums.size()+2);
  for (int i = 0; i<nums.size(); i++)
  {
    vect.push_back(make_pair(nums[i], i+1));
  }
  sort(vect.begin(), vect.end());
  for (int i = nums.size()-1; i>=0; i--)
  {
    pair <int, int> a = vect[i];
    if (places[a.second-1] == 0 && places[a.second+1] == 0)
    {
      places[a.second] = 1;
      sum = sum + a.first;
    }
  }
  return sum;
}

int main()
{
  vector<int> nums = {1, 2, 3, 1};
  vector<int> nums2 = {2, 7, 9, 3, 1};
  cout << rob(nums) << endl;
  cout << rob(nums2) << endl;
}
