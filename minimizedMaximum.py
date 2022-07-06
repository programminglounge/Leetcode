import math
def minimizedMaximum(n, quantities):
  sum = 0
  for i in range(len(quantities)):
    sum = sum + quantities[i]
  x = sum/n
  return math.ceil(x)

n = 7
quantities = [15, 10, 10]
print(minimizedMaximum(n, quantities))

n = 6
quantities = [11, 6]
print(minimizedMaximum(n, quantities))

n = 1
quantities = [10000]
print(minimizedMaximum(n, quantities))
