#include <iostream>
#include <vector>
using namespace std;

long long countvowels(string word) {
  vector<int> vowels;
  long long x = 0;
  for (int i = 0; i<word.length(); i++)
  {
    if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
    {
      vowels.push_back(i);
    }
  }
  if (vowels.size() >1 ) {
    for (int i = 0; i< vowels.size()-1; i++)
    {
      x = x+ (vowels[i+1]-vowels[i])*(i+1)*(vowels[0]-0+1);
    }
    x = x + ((word.length() - (vowels[vowels.size()-1])) * vowels.size());
    return x + countvowels(word.substr(vowels[0]+1));
  }
  else if (vowels.size() == 1)
  {
    x = x + (1)*(vowels[0]-0+1)*(word.length()-vowels[0]);
    return x;
  }
  else
  {
    return 0;
  }
}

int main()
{
  string s = "bbab";
  cout << countvowels(s) << endl;
  return 0;
}
