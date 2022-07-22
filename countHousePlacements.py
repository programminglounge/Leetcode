import math

def countHousePlacements(n):
  if (n == 1):
    return 4
  if (n == 2):
    return 9
  return int(math.pow(countHousePlacements2(n-1)+countHousePlacements2(n-2), 2))
  
def countHousePlacements2(n):
  if (n == 1):
    return 2
  if (n == 2):
    return 3
  return countHousePlacements2(n-1)+countHousePlacements2(n-2)
  
print(countHousePlacements(3))
print(countHousePlacements(4))
print(countHousePlacements(5))
