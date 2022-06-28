def minSteps(s, t):
  s1 = s
  t1 = t
  for i in range(len(s)):
    x = t1.find(s[i])
    if (x != -1):
      t1 = t1[0:x] + t1[x+1:]
  for i in range(len(t)):
    x = s1.find(t[i])
    if (x != -1):
      s1 = s1[0:x] + s1[x+1:]
  return len(s1)+len(s2)

s = "leetcode"
t = "coats"
print(minSteps(s, t))
