def maxValue(n, x):
  count = 0
  if n[0] == '-':
    for i in range(1, len(n)):
      if (int (n[i]<x):
          count = count +1
      else:
          break
    if count == 0:
          return n[0]+str(x)+n[1:]
    else:
          return n[:count+1]+str(x)+n[count+1:]
  else:
    for i in range(len(n)):
      if (int (n[i]>x):
          count = count +1
      else:
          break
    if count == 0:
          return str(x)+n
    else:
          return n[:count]+str(x)+n[count:]  
          
print(maxValue("76", 9))
print(maxValue("78694", 5))
print(maxValue("78694", 3))
print(maxValue("-55", 2))
print(maxValue("-55", 6))
print(maxValue("99", 9))
print(maxValue("-13", 2))
     
