def minSumSquareDiff(nums1, nums2, k1, k2):
  nums3 = []
  for i in range(len(nums1)):
    if (nums1[i]-nums2[i] >0):
      x = nums1[i]-nums2[i]
      nums3.append([x, 1, i])
    if (nums1[i]-nums2[i] <0):
      x = nums2[i]-nums1[i]
      nums3.append([x, 2, i])
  nums3.sort(key = lambda x:x[0], reverse = True)
  length = len(nums3)
  i = 0
  while ((k1>0 or k2>0) and len(nums3) >0):
    x = nums3[i]
    if (x[1] == 2):
      if (nums2[x[2]] > nums1[x[2]]):
        if (k1>0):
          k1 = k1-1
          nums1[x[2]] = nums1[x[2]]+1
          x[0] = x[0] -1
          nums3.sort(key=lambda x:x[0], reverse=True)
        elif(k2>0):
          k2 = k2-1
          nums2[x[2]] = nums2[x[2]]-1
          x[0] = x[0] -1
          nums3.sort(key=lambda x:x[0], reverse=True)
    elif (x[1] == 1):
      if (nums1[x[2]] > nums2[x[2]]):
        if (k1>0):
          k1 = k1-1
          nums1[x[2]] = nums1[x[2]]-1
          x[0] = x[0] -1
          nums3.sort(key=lambda x:x[0], reverse=True)
        elif (k2>0):
          k2 = k2-1
          nums2[x[2]] = nums2[x[2]]+1
          x[0] = x[0] -1
          nums3.sort(key=lambda x:x[0], reverse=True)
  sum = 0
  for i in range(length):
    x1 = math.pow(nums1[i]-nums2[i], 2)
    sum = sum + x1
  return sum

nums1 = [1, 4, 10, 12]
nums2 = [5, 8, 6, 9]
k1 = 1
k2 = 1
print(minSumSquareDiff(nums1, nums2, k1, k2))


nums1 = [5, 8, 6, 9]
nums2 = [5, 8, 6, 9]
k1 = 1
k2 = 1
print(minSumSquareDiff(nums1, nums2, k1, k2))
