#include <iostream>

using namespace std;
int divide (int dividend, int divisor) {
  if (dividend>0 && divisor >0) {
    int i = 0;
    int x = dividend;
    int y = divisor;
    while (x>y) {
      x = x-y;
      i++;
    }
    return i;
  }
  if (dividend>0 && divisor <0) {
    int i = 0;
    int x = dividend;
    int y = divisor;
    while (x>-y) {
      x = x+y;
      i--;
    }
    return i;
  }
  
  if (dividend<0 && divisor >0) {
    int i = 0;
    int x = dividend;
    int y = divisor;
    while (-x>y) {
      x = x+y;
      i--;
  
    }
    return i;
  }
  
  if (dividend<0 && divisor <0) {
    int i = 0;
    int x = dividend;
    int y = divisor;
    while (x<y) {
      x = x-y;
      i++;
  
    }
    return i;
  }
  return 0;
}

int main() {
  cout << divide(100, 3) << endl;
  cout << divide(25, -3) << endl;
  cout << divide(-25, 3) << endl;
  cout << divide(-65, -3) << endl;
}
