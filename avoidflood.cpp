// I solved this problem using a greedy approach
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> avoidFlood(vector<int> & rains) {
  int max = 0;
  for (int i=0; i<rains.size(); i++)
  {
    if (rains[i] > max)
    {
      max = rains[i];
    }
  }
  vector<int> floods(max); // define a flood for each lake
  vector <int> lakefull; // determine which lake is full and add that to the vector
  vector <int> result; // this is the output so far. This array has an equal length to the rains array
  vector<int> result2 = {}; // if the output is not possible, we return an empty result
  for (int i = 0; i<rains.size(); i++)
  {
    if (rains[i] != 0)
    {
      if (floods[rains[i]-1]==1)
      {
        return result2;
      }
      else if (floods[rains[i]-1] == 0)
      {
        floods[rains[i]-1]++;
      }
      lakefull.push_back(rains[i]);
      result.push_back(-1);
    }
    else
    {
      //we will use a greedy algorithm where it will look at each lake which is 
      //full and determine which one will show up faster in the sequence of rains and 
      //choose that lake as the one to dry first.
      int positions = rains.size();
      int value = 0;
      for (int j = 0; j<lakefull.size(); j++)
      {
        for (int k = i+1; k<rains.size(); k++) 
        {
          if (rains[k] == lakefull[j] && k< positions) 
          {
            positions = k;
            value = j;
            break;
          }
        }
      }
      if (positions != rains.size())
      {
        result.push_back(lakefull[value]);
        floods[lakefull[value]-1]--;
        lakefull.erase(lakefull.begin()+value);
      }
      else if (lakefull.size() != 0)
      {
        result.push_back(lakefull[value]);
        floods[lakefull[value]-1]--;
        lakefull.erase(lakefull.begin()+value);
      }
    }
  }
  return result;
}

int main()
{
  vector<int> rains = {1, 2, 0, 1, 2};
  vector <int> results = avoidFlood(rains);
  for (int i = 0; i<results.size(); i++)
  {
    cout << results[i] << " ";
  }
  cout << endl;
  return 0;
}
