def removeOccurrences(s, part):
  s_copy = s
  index = s_copy.find (part)
  while (index != -1):
    s_copy = s_copy[0:index]+s_copy[index+len(part):]
    index = s_copy.find(part)
  return s_copy

s = "daabcbaabcbc"
part = "abc"
print(removeOccurrences(s, part))
