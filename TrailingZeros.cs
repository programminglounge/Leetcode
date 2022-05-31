using System;
public class Program
{
  public static int TrailingZeroes(int n){
    if (n< 5)
    {
      return 0;
    }
    else
    {
      return (n/5) + TrailingZeros(n/5);
    }
  }
  public static void Main()
  {
    Console.WriteLine(TrailingZeroes(15)); //15 ! = 1307674368000 -> 3 trailing zeroes
  }
}
