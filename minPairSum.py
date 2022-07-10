def minPairSum(nums):
  sums = []
  nums2 = nums
  nums2.sort()
  for i in range(len(nums2//2)):
    sum = nums2[i]+nums2[len(nums2)-i-1]
    sums.append(sum)
  sums.sort(reverse=True)
  return sums[0]

nums = [3, 5, 4, 2, 4, 6]
print(minPairSum(nums))

nums = [3, 5, 2, 3]
print(minPairSum(nums))
