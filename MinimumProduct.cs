using System.Linq;
using System.Collections.Generic;

public class Program
{
  public static int MaximumProduct(int[] nums, int k)
  {
    List<int> pq = new List<int>();
    for (int i = 0; i<nums.Length; i++)
    {
      pq.Add(nums[i]);
    }
    if (nums.length != 0)
    {
      for (int i = 0; i<k; i++)
      {
        pq.Sort();
        int s = pq[0];
        pq.Remove(s);
        pq.Add(s+1);
      }
      int sum = 1;
      for (int i = 0; i<nums.Length; i++)
      {
        int s = pq[i];
        sum = sum * s; 
      }
      return sum;
    }
    else
    {
      return 0;
    }
  }
  public static void Main() 
  {
    int [] nums = {6, 3, 3, 2};
    int k = 2;
    Console.WriteLine(MaximumProduct(nums, k));
  }
}
