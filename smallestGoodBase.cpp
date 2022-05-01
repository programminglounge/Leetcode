// To solve this problem I am using the formula of the sumation of a geometric series
// 1 + q + (q^2) + .... + (q^n) = ((q^n)-1)/(q-1) = Sn
//solving the equation to find (q^n) we have (q^n) = (Sn)(q-1)+1
// the Sn is given to us and we need to find q.
// we start by setting q = 2 and doing divisions and remainders until the remainder = 0 
// and the quotent of the division is equal to 1.
// if q does not satsify the relationship we add one to q and continue until  this relationship is true

// Example: lets say Sn = 13, we set q = 2 in the equation and we get
//(13)(1)+1 = 14 must be a power of 2. to test this we divide 14 by 2, the remainder is zero and the quotent is seven
// we now divide 7 by 2, since the raminder is 1, we can say 14 is not a power of 2 and plug in q = 3 in the equation

// now we must try to see if (13)(2)+1 is a power of 3
// 27 is a power of 3, so we return 3 as our answer

#include <iostream>
using namespace std;

string smallestGoodBase(string n) {
  long long sum = 0;
  string resultbase = "";
  for (int i = 0; i<n.size(); i++)
  {
    sum = (sum *10) + (n[i]-'0');
  }
  long long rem = 1;
  for (long long q = 2; q<=sum; q++)
  {
    long long result = (sum*(q-1)+1);
    while (result != 1)
    {
      rem = result % q;
      if (rem != 0)
      {
        break;
      }
      result = result / q;
    }
    if (result == 1 && rem == 0)
    {
      long long p = q;
      while (p != 0)
      {
        long long divide = p % 10;
        char c = divide + 48;
        resultbase.insert(0, 1, c);
        p = p/10;
      }
      return resultbase;
    }
  }
}

int main()
{
  cout << smallestGoodBase("13")<< endl;
  cout << smallestGoodBase("183")<< endl;
  cout << smallestGoodBase("1000000000000000000")<< endl;
}
