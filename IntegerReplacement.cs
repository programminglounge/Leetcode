using System;

public class Program
{
  public static int Main()
  {
    for (int i = 1; i<30; i++)
    {
      Console.WriteLine("The integer replacement for " + i.ToString() + " is " + IntegerReplacement(i).ToString());
    }
    Console.WriteLine(IntegerReplacement((int)Math.Pow(2, 31)-1);
    return 0;
  }
  public static int IntegerReplacement (int n)
  {
    if (n==2)
      return 1;
    if (n==1)
      return 0;
    if (n%2 == 0)
      return 1+ IntegerReplacement(n/2);
    if (n%2 == 1)
      return Math.Min(1+IntegerReplacement(n+1), 1+IntegerReplacement(n-1));
    return 0;
}

