def successfulPairs(spells, potions, success):
  results = []
  spellspoitions = []
  sums = 0
  for j in range(len(spells)):
    for i in range(len(potions)):
      spellpoitions.append(potions[i]*spells[j])
    for k in range(len(spellspoitions)):
      if (spellspoitions[k]>success):
        sums = sums+1
    spellspoitions.clear()
    results.append(sums)
    sums = 0
  return results

spells = [5, 1, 3]
potions = [1, 2, 3, 4, 5]
success = 7
print(successfulPairs(spells, potions, success))


