//This is a program to find the reverse of the integer x

#include <iostream>
using namespace std;

int reverse (int x)
{
  int copy = x;
  int result = 0;
  while (copy != 0)
  {
    int rem = copy % 10;
    result = (result*10) + rem;
    copy = copy / 10;
  }
  return result;
}

int main()
{
  cout << reverse(123) << endl;
  cout << reverse(-1234) << endl;
  cout << reverse (120) << endl;
}
