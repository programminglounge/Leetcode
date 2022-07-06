using System;
class HelloWorld
{
  public static string RemoveOccurrences(string s, string part)
  {
    string s1 = s;
    int found = s1.IndexOf(part);
    while(found != -1)
    {
      s1 = s1.Substring(0, found)+s1.Substring(found+part.Length);
      found = s1.IndexOf(part);
    }
    return s1;
  }
  static void Main()
  {
    string s = "daabcbaabcbc";
    string part = "abc";
    Console.WriteLine(RemoveOccurrences(s, part));
  }
}
