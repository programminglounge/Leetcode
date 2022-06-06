#include <vector>
using namespace std;

vector<int> findOriginalArray(vector<int> & changed)
{
  vector<int> original;
  vector<int> copy;
  for (int i = 0; i<changed.size(); i++)
  {
    copy.push_back(changed[i]);
  }
  sort(copy.begin(), copy.end());
  vector<int>::iterator it;
  int count = changed.size()/2;
  for (int i = 0; i<count; i++)
  {
    it = find(copy.begin(), copy.end, copy[i]*2);
    if (it != copy.end())
    {
      original.push_back(copy[i]);
      int index = it-copy.begin();
      copy.erase(copy.begin()+index);
    }
    else
    {
      original.clear();
      return original;
    }
  }
  if (copy.size() == original.size())
  {
    for (int i = 0; i<copy.size(); i++)
    {
      if (copy[i] != original[i])
      {
        original.clear();
        return original;
      }
    }
    return original;
  }
  original.clear();
  return original;
}

void main()
{
  vector<int> changed = {1, 3, 4, 2, 6, 8};
  vector<int> result = findOriginalArray(changed);
  cout << "[";
  if (result.size() != 0)
  {  
    for (int i = 0; i<result.size()-1; i++)
    {
      cout << result[i] << ", ";
    }
    cout << result[result.size()-1];
  }
  cout <<  "]" << endl;
  
  changed = {6, 3, 1, 0};
  result = findOriginalArray(changed);
  cout << "[";
  if (result.size() != 0)
  {  
    for (int i = 0; i<result.size()-1; i++)
    {
      cout << result[i] << ", ";
    }
    cout << result[result.size()-1];
  }
  cout <<  "]" << endl;
}
