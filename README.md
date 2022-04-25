# Leetcode
In this repository I solve some of the medium and hard problems on Leetcode 

29. Given two integers dividend and divisor divide two integers without using multiplication, division and mod operator
The integer division should truncate toward zero, which means losing its fractional part.

Example 1:
Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.3333 which is truncated to 3.

Example 2:
Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = -2.3333 which is truncated to -2.

Constraints:
-2^31 <= dividend, divisor <= 2^31 -1
divisor != 0

(Medium) 50. Pow(x, n)  
Implement pow(x, n) which calculates x raised to the power n (i.e., x^n)

Example 1: 
Input: x= 2.0, n = 10
Output: 1024.0

Example 2: 
Input: x= 2.1, n = 3
Output: 9.261

Example 3:
Input: x = 2.0, n = -2
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

