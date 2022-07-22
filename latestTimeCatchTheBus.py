def latestTimeCatchTheBus (buses, passengers, capacity):
  served = []
  buses.sort()
  passengers.sort()
  full_capacity = 0
  for i in range(len(buses)):
    j = 0
    while(j<len(passengers)):
      if (passengers[j]<buses[i]):
        full_capacity = full_capacity + 1
        served.append(passengers[j])
        passengers.pop(0)
        if(full_capacity == capacity):
          full_capacity = 0
          break
      else:
        full_capacity = 0
        break
  for i in range(len(served)-1):    
    if (served[len(served)-1-i] - served[len(served)-2-i] >1):
      return served[len(served)-1-i]-1
  return -1

buses = [20, 30, 10]
passengers = [19, 13, 26, 4, 25, 11, 21]
capacity = 2
print(latestTimeCatchTheBus(buses, passengers, capacity))

buses = [10, 20]
passengers = [2, 17, 18, 19]
capacity = 2
print(latestTimeCatchTheBus(buses, passengers, capacity))
