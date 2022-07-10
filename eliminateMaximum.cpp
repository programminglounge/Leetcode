#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int eliminateMaximum(vector <int> & dist, vector <int> & speed)
{
  vector<pair<double, int>> my_time;
  for (int i = 0; i<dist.size(); i++)
  {
    double len = (double) dist[i]/speed[i];
    my_time.push_back(make_pair(len, i+1));
  }
  sort(my_time.begin(), my_time.end());
  while(true)
  {
    if(my_time.size() == 0)
    {
      return count;
    }
    count = count + 1;
    my_time.erase(my_time.begin());
    for (int i = 0; i<my_time.size(); i++)
    {
      my_time[i].first = my_time[i].first-1;
      if (my_time[i].first <= 0)
      {
        return count;
      }
    }
  }
}

int main()
{
  vector<int> dist;
  vector<int> speed;
  
  dist.push_back(1);
  dist.push_back(1);
  dist.push_back(2);
  dist.push_back(3);
  speed.push_back(1);
  speed.push_back(1);
  speed.push_back(1);
  speed.push_back(1);
  
  cout << eliminateMaximum(dist, speed) << endl;
  dist.clear();
  speed.clear();
  
  dist.push_back(1);
  dist.push_back(3);
  dist.push_back(4); 
  speed.push_back(1);
  speed.push_back(1);
  speed.push_back(1);
  
  cout << eliminateMaximum(dist, speed) << endl;
  dist.clear();
  speed.clear();
  
  dist.push_back(3);
  dist.push_back(2);
  dist.push_back(4);
  speed.push_back(5);
  speed.push_back(3);
  speed.push_back(2);
  
  cout << eliminateMaximum(dist, speed) << endl;
  dist.clear();
  speed.clear();

}
