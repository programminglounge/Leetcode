// I am solving the problem by using a greedy approach where I calculate the ratio of wage/quality for each
// worker. Assuming we want that ratio is consistent for all workers, we calculate the wages that would be offered for all the workers
//We test to see if the wage for a worker is more than their required wage. If so, we add that worker to the vector wagestopay.
// we sort the wages from smallest to largest and after sorting I want to make sure
// I have at least k workers so I put an if condition and then add all the wages together to get wagespaid
// finally after going through each loop we sort the total wage and return the smallest amount.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double mincostToHireWorkers(vector<int> & quality, vector <int>& wage, int k)
{
  vector <double> wageproposed;
  vector <pair<double, int>> wagestopay;
  vector <double> wagespaidtotal;
  double wagespaid = 0;
  int count = 0;
  for (int i = 0; i<wage.size(); i++)
  {
    double result = (double) wage[i]/quality[i];
    for (int j = 0; j<wage.size(); j++)
    {
      wageproposed.push_back(result*quality[j]);
      if (wageproposed[j] - wage[j] >=0)
      {
        wagestopay.push_back(make_pair(wageproposed[j], j);
        count++;
      }
    }
    sort(wagestopay.begin(), wagestopay.end());
    if count >=k)
    {
      for (int p = 0; p<k; p++)
      {
        wagespaid = wagespaid + wagestopay[p].first;
      }
      wagespaidtotal.push_back(wagespaid);
    }
    count = 0;
    wagespaid = 0;
    wagestopay.clear();
    wageproposed.clear();
  }
  sort(wagespaidtotal.begin(), wagespaidtotal.end());
  return wagespaidtotal[0];
}

int main()
{
  vector<int> quality = {3, 1, 10, 10, 1};
  vector<int> wage = {4, 8, 2, 2, 7};
  int k = 3;
  cout << mincostToHireWorkers(quality, wage, k) << endl;
  return 0;
}
