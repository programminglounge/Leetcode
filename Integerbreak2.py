def IntegerBreak2(n):
  if (n<=1):
    return 0
  if (n==2):
    return 1
  if (n==3):
    return 2
  if (n == 4):
    return 4
  results = []
  for i in range (1, 5):
    result.append(i)
  #prime numbers are listed till 379 however the output will work up to 67000 depending on the platform and timeout specified
  primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
            73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167,
            173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269,
            271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379]
  count = 0
  for j in range (5, n+1):
    while(True):
      if (j> primes[count]):
        count = count + 1
      else:
        break
    Max = 0
    for i in range (0, count):
      if Max < result[j-primes[i]-1]*primes[i]):
        Max = result[j-primes[i]-1]*primes[i]
    result.append(Max)
    Max = 0
  return result[n-1]
                      
  
