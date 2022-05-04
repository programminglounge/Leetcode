//I am using dynamic programming to solve the problem
// I created a two dimensional array called dimension which stores the smallest element of each subarray starting from
//index i to index j as an example if arr = [3, 4, 2, 5] , dimension[0][2] = min {3, 4, 2} = 2
// it can be shown that dimension [0][2] = min {dimension[0][1], dimension[1][1] }

//This program can also be written using a recursive algorithm, which may not be suitable if the size of the vector arr is large
//That code is written in SumSubArrayMins.cpp

#include <iostream>
#include <vector>
using namespace std;

int sumSubarrayMins2(vector<int>& arr)
{
  if (arr.size() == 0)
  {
    return 0;
  }
  int sum = 0;
  vector<vector<int>> dimension (arr.size());
  for (int i = 0; i<arr.size(); i++)
  {
    dimension[i] = vector<int>(arr.size());
  }
  for (int i = 0; i<arr.size(); i++)
  {
    dimension[i][i] = arr[i];
  }
  // find the minimum for all positions i, j using dynamic programming
  for (int i = arr.size()-1; i>=0; i--)
  {
    for (int j = i+1; j<arr.size(); j++) {
      dimension[i][j] = mymin(dimension[i][j-1], dimension[i+1][j]);
    }
  }
  // sum the minimum for all positions i, j
  for (int i = 0; i<=arr.size(); i++)
  {
    for (int j = i; j<arr.size(); j++) {
      sum = sum + dimension[i][j];
    }
  }
  
  return sum;  
}

int mymin(int a, int b)
{
  if (a>=b) {
    return b;
  }
  return a;
}

int main ()
{
  vector <int> array = {2, 3, 4, 1};
  vector <int> array2 = {};
  cout << sumSubarrayMins2(array) << endl;
  cout << sumSubarrayMins2(array2) << endl;
  return 0;
}
