def countLatticePoints(circles):
  results = []
  for i in range (len(circles)):
    x = circles[i]
    first_x = -x[2]
    second_x = x[2]
    first_y = -x[2]
    second_y = x[2]
    for j in range(first_x, second_x+1):
      for k in range(first_y, second_y+1):
        if (k*k + j*j <= x[2]*x[2]):
          test = results.count([j+x[0], k+x[1]])
          if test == 0:
            results.append([j+x[0], k+x[1]])
    
  return len(results)

circles = [[2, 2, 2], [3, 4, 1]]
print(countLatticePoints(circles))
circles = [[2, 2, 1]]
print(countLatticePoints(circles))
