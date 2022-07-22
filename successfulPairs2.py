def successfulPairs2(spells, potions, success):
  results = []
  sums = 0
  for j in range(len(spells)):
    for i in range(len(potions)):
      if (potions[i]*spells[j]>success):
        sums = sums+1
    results.append(sums)
    sums = 0
  return results

spells = [5, 1, 3]
potions = [1, 2, 3, 4, 5]
success = 7
print(successfulPairs2(spells, potions, success))
