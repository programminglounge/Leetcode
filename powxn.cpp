#include <iostream>
using namespace std;

double myPow(double x, int n) {
  if (n==0) {
    return 1;
  }
  if (n >=1) {
    return x * myPow(x, n-1);
  }
  if (n <=-1)
  {
    return (1/x) * myPow(x, n+1);
  }
}

int main()
{
  double x = 2.0;
  cout << myPow(x, -2) << endl;
  cout << myPow(x, 2) << endl;
}
