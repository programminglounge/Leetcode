#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part)
{
  string s1 = s;
  int found = s1.find(part);
  while (found != std::string::npos)
  {
    s1 = s1.substr(0, found)+s1.substr(found+part.length());
    found = s1.find(part);
  }
  return s1;
}

int main()
{
  string s = "daabcbaabcbc";
  string part = "abc";
  std::cout << removeOccurrences(s, part) << std::endl;
}
