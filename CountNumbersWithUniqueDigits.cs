// In this problem we need to find the count of numbers in the range [0 , 10^n) with unique digits
// I will take a look at the count of Numbers between 100 and 999 as an example 
//but this logic can be applied to all numbers. For the number to be 3 digits long the first digit cannot equal zero
//Therefore, we have 9 options to choose from 1, 2, 3, 4, 5, 6, 7, 8, 9
//Assume we chose 2 for the first digit, in order for the second digit to be unique from the first one, it can be any 
// number except 2, hence we have 9 options for the second digit, namely 0, 1, 3, 4, 5, 6, 7, 8, 9
// Assume we choose 0, the final digit must not be 2 or 0 so we have 1, 3, 4, 5, 6, 7, 8, 9 as our options
// 9*9*8 = 648 three digit numbers where each digit is unique.

using System;
  
public class Program
{
  public static int Main()
  {
    for (int i = 0; i<= 11; i++)
    {
      Console.WriteLine("Number of unique numbers bigger than zero and less than " + Convert.ToString(Math.Pow(10, i)) + " is " + CountNumbersWithUniqueDigits(i).ToString());
    }
  }
  public static int CountNumbersWithUniqueDigits(int n)
  {
    int count = 0;
    if (n>-1)
    {
      count = count + 1;
    }
    if (n>0)
    {
      count = count + 9;
    }
    if (n>1)
    {
      count = count + 81;
    }
    if (n>2)
    {
      count = count + 648;
    }
    if (n>3)
    {
      count = count + 4536;
    }
    if (n>4)
    {
      count = count + 27216;
    }
    if (n>5)
    {
      count = count + 136080;
    }
    if (n>6)
    {
      count = count + 544320;
    }
    if (n>7)
    {
      count = count + 1632960;
    } 
    if (n>8)
    {
      count = count + 3265920;
    }
    if (n>9)
    {
      count = count + 3265920;
    }
    if (n>10)
    {
      count = 0;
    }
    return count;
  }
}
