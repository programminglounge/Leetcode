int sumSubarrayMins2(vector<int>& arr)
{
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
  
  for (int i = arr.size()-1; i>=0; i--)
  {
    for (int j = i+1; j<arr.size(); j++) {
      dimension[i][j] = mymin(dimension[i][j-1], dimension[i+1][j]);
    }
  }
  
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
