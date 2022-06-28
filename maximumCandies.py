def maximumCandies(candies, k):
  count = 0
  candies_copy = candies
  for i in range(len(candies)):
    count = count + candies[i]
  if (count < k):
    return 0
  else:
    if (k <= len(candies)):
      candies_copy.sort()
      return candies_copy[len(candies)-k]
    else:
      result = count //k
      array_divide = []
      while(result >0 ):
        for i in range(len(candies)):
          x = candies[i]
          times = x //result
          for j in range(times):
            array_divide.append(result)
          array_divide.append(x-(result*times))
        if (array_divide.count(result) >= k:
            return result
        else:
            array_divide.clear()
            result = result -1
      return -1
            
candies = [5, 7, 6]
k = 4
print(maximumCandies(candies, k))
              
