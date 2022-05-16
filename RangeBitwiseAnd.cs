using System;
using System.Numerics;

public class Program
{
  public static int Main()
  {
    Console.WriteLine(RangeBitWiseAnd(5, 7); // Should return 4
    return 0;
  }
  public static int RangeBitwiseAnd(int left, int right)
  {
    if (left == right)
    {
      return left;
    }
    int x1 = (int)Math.Log2(left);
    int x2 = (int)Math.Log2(right);
    if (x1 != x2)
    {
      return 0;
    }
    else
    {
      return (int)Math.pow(x1, 2);
    }
  }
}
