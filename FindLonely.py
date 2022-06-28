def findLonely(nums):
  nums_copy = nums
  nums_copy.sort()
  lonely = []
  for i in range(len(nums_copy)):
    x = nums_copy[i]
    y = nums_copy.count(x+1)
    t = nums_copy.count(x)
    z = nums_copy.count(x-1)
    if (y == 0 and z== 0 and t == 1):
      lonely.append(nums_copy[i])
  return lonely

nums = [10, 6, 5, 8]
print(findLonely(nums))
