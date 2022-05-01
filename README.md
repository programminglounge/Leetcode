# Leetcode
In this repository I solve some of the medium and hard problems on Leetcode 

29. Given two integers dividend and divisor divide two integers without using multiplication, division and mod operator
The integer division should truncate toward zero, which means losing its fractional part.

Example 1:
<br>
Input: dividend = 10, divisor = 3
<br>
Output: 3
<br>
Explanation: 10/3 = 3.3333 which is truncated to 3.
<br>
<br>

Example 2:
<br>
Input: dividend = 7, divisor = -3
<br>
Output: -2
<br>
Explanation: 7/-3 = -2.3333 which is truncated to -2.
<br>
<br>

Constraints:
-2^31 <= dividend, divisor <= 2^31 -1
<br>
divisor != 0

(Medium) 50. Pow(x, n)  
Implement pow(x, n) which calculates x raised to the power n (i.e., x^n)

Example 1: 
<br>
Input: x= 2.0, n = 10
<br>
Output: 1024.0
<br>

Example 2: 
<br>
Input: x= 2.1, n = 3
<br>
Output: 9.261
<br>

Example 3:
<br>
Input: x = 2.0, n = -2
<br>
Output: 0.25

Constraints:
-100.0 < x < 100.0
-2^31 <= n <= (2^31)-1
-10^4 <= x^n <= 10^4

--------------------------------------------------

(Hard) 315. Count of Smaller Numbers After Self
You are given an integer array nums and you have to return a new counts array. The counts array has the property where counts[i] is the number of smaller elements to the right of nums[i].

Example 1:
Input: nums = [5, 2, 6, 1]
Output: [2, 1, 1, 0]
Explanation: To the right of 5 there are 2 smaller elements (2 and 1)
To the right of 2 there is only 1 smaller element (1).
To the right of 6 there is 1 smaller element(1)
To the right of 1 there is 0 smaller element.

Example 2:
Input: nums = [-1]
Output: [0]

Example 3:
Input: nums = [-1, -1]
Output: [0, 0]

Constraints:

1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4

--------------------------------------------------

(Medium) 2063. Vowels of All Substrings
Given a string word, return the sum of the number of vowels ('a', 'e', 'i', 'o' and 'u') in every substring of word
A substring is a contiguous (non-empty) sequence of characters within a string.

Note: Due to the large constraints, the answer may not fit in a signed 32 bit integer. Please be careful during the calculations.

Example 1:
Input: word = "aba"
Output: 6
Exaplanation: All possible substrings are "a", "ab", "aba", "b", "ba", and "a".
"b" has 0 vowels in it
"a", "ab", "ba" and "a" have 1 vowel each
"aba" has 2 vowels in it
Hence, the total sum of vowels = 0+1+1+1+1+2 = 6

Example 2:
Input: word = "abc"
Output: 3
Explanation: All possible substrings are "a", "ab", "abc", "b", "bc" and "c"
"a", "ab" and "abc" have 1 vowel each
"b", "bc" and "c" have 0 vowels each
Hence the sum of vowels = 1 + 1 + 1 + 0 + 0 + 0 = 3

Example 3:
Input: word = "ltcd"
Output: 0
Explanation: There are no vowels in any substring of "ltcd"

Constraints:
1 <= word.length <= 10^5
word consists of lowecase English letters

----------------------------------------------------------------

(Hard) 857. Minimum Cost to Hire K Workers  

There are n workers. You are given two integer arrays quailty and wage where quality[i] is the quality of the ith worker and wage[i]
is the minimum wage expectation for the ith worker. We want to hire exactly k workers to form a paid group. To hire
a group of k workers, we must pay them according to the following rules:

1. Every worker in the paid group should be paid in the ratio of their quality compared to other workers in the paid group.
2. Every worker in the paid group must be paid at least their mimimum wage expectation.

Given the integer k, return the least amount of money needed to form a paid group satisfying the above conditions. 
Answers within 10^-5 of the actual answer will be accepted.

Example 1:
Input: quality = [10, 20, 5],  wage = [70, 50, 30], k=2
<br>
Output: 105.000
<br>
Explanation: we pay 70 to the 0th worker and 35 to the 2nd worker
<br>
Example 2:
Input: quality = [3, 1, 10,  10,  1],  wage = [4, 8, 2,  2,  7], k=3
Output: 30.6667
Explanation: we pay 4 to the 0th worker and 13.3333 to the 2nd and 3rd worker seperately

--------------------------------------------------------------------

(Medium)  198. House Robber 

You are a professional robber pkanning to rob houses along a street. Each house has a certain amount of money stashed,
the only constraint stopping you from robbing each of them is that adjeacent houses have security systems conneced 
and it will automatically contact the police if two adjeacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight 
without alerting the police.

Example 1:
Input: nums = [1, 2, 3, 1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3)
Total amount you can rob = 1 + 3 = 4

Example 2:
Input: nums = [2, 7, 9, 3, 1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (mooney = 1)
Total amount you can rob = 2+9+1= 12

---------------------------------------------------

(Medium) 7. Reverse Integer
