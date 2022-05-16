using System;
using System.Numerics;
using System.Collections.Generic;
public class Program
{
  public static int Main()
  {
    Console.WriteLine(IntegerBreak2(21600); // 21600 is the limit for 10 seconds
    return 0;
  }
  public static BigInteger (int n)
  {
  if (n<1)
    return 0;
  if (n == 2)
    return 1;
  if (n == 3)
    return 2;
  if (n == 4)
    return 4;
  BigInteger[] result = new BigInteger[n+1];
  for (int i = 1; i< 4; i++)
  {
    result[i] = i;
  }
  // primes are listed up to 350 but can be added up to 100000 to make the program give BigInteger outputs
  int [] primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353};
  int count = 0; 
  for (int j = 5; j <=n; j++)
  {
    while(true)
    {
      if (j>primes[count])
      {
        count++;
      }
      else
      {
        break;
      }
    }
    BigInteger Max = 0;
    for (int i = 0; i<count; i++)
    {
      if (Max<result[j-primes[i]] * primes[i])
      {
        Max = result[j-primes[i]] * primes[i];
      }
    }
    result[j] = Max;
    Max = 0;
  }
  return result[n];
  }
}
