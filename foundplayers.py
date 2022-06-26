def found(x, players):
  if len(players)==0:
    return -1
  else:
    for i in range(len(players)):
      if (players[i][0] == x):
        return i
  return -1

answer = []
lostonlyone = []
noloss = []
players = []
matches = [[1, 3], [2, 3], [3, 6], [5, 6], [5, 7], [4, 5], [4, 8], [4, 9], [10, 4], [10, 9]]
for i in range(len(matches)):
  x = matches[i][0]
  y = matches[i][1]
  j = found(x, players)
  if (j == -1):
    players.append([x, 1, 0])
  else:
    players[j][1] = players[j][1]+1
  k = found(y, players)
  if (k == -1):
    players.append([y, 0, 1])
  else:
    players[k][2] = players[k][2]+1
for i in range(len(players)):
  if players[i][2] == 0:
    noloss.append(players[i][0])
  if players[i][2] == 1:
    lostonlyone.append(players[i][0])

noloss.sort()
lostonlyone.sort()
answer.append(noloss)
answer.append(lostonlyone)
print(answer)
