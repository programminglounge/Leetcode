def my_mapping(number, mapping):
  result = 0
  while number != 0:
    res = number %10
    result = (result * 10)+mapping[res]
    number = number //10
  return result

def inverse(number):
  result = 0
  while number != 0:
    res = number %10
    result = (result * 10)+res
    number = number //10
  return result

transform = 0
mapping = [8, 9, 4, 0, 2, 1, 3, 5, 7, 6]
resultmapping = []
nums = [991, 338, 38]
for i in range(len(nums)):
  number = nums[i]
  transform = my_mapping(number, mapping)
  transform = inverse(transform)
  resultmapping.append([transform, number])
  
resultmapping.sort(key =lambda x: x[0], reverse = False)
final = []
for i in range(len(resultmapping)):
  final.append(resultmapping[i][1])

print(final)
