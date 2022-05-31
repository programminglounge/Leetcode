using System;

public class Program
{
  public static int Main()
  {
    Console.WriteLine("Please enter the sum");
    int s_n = Convert.ToInt32(Console.ReadLine());
    int remainder = 0;
    int q_n = 0;
    for (int i = 2; i<s_n; i++) {
      q_n = ((s_n)*(i-1)+1);
      int p_n = q_n;
      while (remainder == 0)
      {
        remainder = p_n % i;
        p_n = p_n/i;
        if (remainder == 0) {
          if (p_n == 1) {
            Console.WriteLine(i);
            return i;
          }
        }
        else {
          remainder = 0;
          break;
        }
      }
    }
    return 0;
  }
}
