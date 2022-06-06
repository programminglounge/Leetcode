#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int my_min(int a, int b)
{
  if (a>b)
  {
    return a;
  }
  return b;
}
int minSpeedOnTime(vector<int> & dist, double hour)
{
  if (dist.size() == 0)
  {
    return 0;
  }
  if (hour < (double)(dist.size()-1))
  {
    return -1;
  }
  else
  {
    vector<int> newdist;
    for (int i = 0; i<dist.size()-1; i++)
    {
      newdist.push_back(dist[i]);
    }
    double save = hour- floor(hour);
    if (save == 0)
    {
      save = 1;
    }
    int distance = dist[dist.size()-1];
    int speed = ceil(distance/save);
    return my_min(speed, minSpeedOnTime(newdist, hour-save));
  }
}
int main()
{
  vector<int> dist = {1, 3, 2};
  double hour = 2.7;
  cout << minSpeedOnTime(dist, hour) << endl;
  return 0;
}
