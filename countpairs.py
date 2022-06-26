def countPairs(nums, k):
  result = 0
  for i in range(len(nums)):
    for j in range(i+1, len(nums)):
      if ((nums[i] * nums[j])%k ) == 0:
        result = result + 1
  return result

nums = [1, 2, 3, 4, 5]
k = 2
print(countPairs(nums, k))
