using System;

public class Program
{
  public static int Main() {
    Console.WriteLine("Please e
    double x = Convert.ToDouble(Console.ReadLine());
    int n = Convert.ToInt32(Console.ReadLine());
    double res = myPow(x, n);
    Console.WriteLine(res);
    return 0;
  }
  public static double MyPow(double x, int n){
    if (n == 0){
      return 1.0;
    }
    else if (n>0)
    {
      return x * MyPow(x, n-1);
    }
    else
    {
      return (1/x) * MyPow(x, n-1);
    }
  }
}
