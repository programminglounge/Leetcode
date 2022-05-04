# Leetcode
In this repository I solve some of the medium and hard problems on Leetcode 

29. Given two integers dividend and divisor divide two integers without using multiplication, division and mod operator.<br>
The integer division should truncate toward zero, which means losing its fractional part.

Example 1:
<br>
<b>Input</b>: dividend = 10, divisor = 3
<br>
<b>Output</b>: 3
<br>
<b>Explanation</b>: 10/3 = 3.3333 which is truncated to 3.
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
-2<sup>31</sup> <= dividend, divisor <= 2<sup>31</sup> -1
<br>
divisor != 0

---------------------------------------------------

(Medium) 50. Pow(x, n)  
Implement pow(x, n) which calculates x raised to the power n (i.e., x<sup>n</sup>)

Example 1: 
<br>
<b>Input</b>: x= 2.0, n = 10
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

Constraints: <ul><li>
  -100.0 < x < 100.0</li>
  <li>-2<sup>31</sup> <= n <= 2<sup>31</sup>-1</li>
<li>-10<sup>4</sup> <= x<sup>n</sup> <= 10<sup>4</sup></li>
</ul>

--------------------------------------------------

(Hard) 315. Count of Smaller Numbers After Self <br>
You are given an integer array nums and you have to return a new counts array. The counts array has the property where counts[i] is the number of smaller elements to the right of nums[i].

Example 1: <br>
<b>Input</b>: nums = [5, 2, 6, 1] <br>
<b>Output</b>: [2, 1, 1, 0] <br>
Explanation: To the right of 5 there are 2 smaller elements (2 and 1) <br>
To the right of 2 there is only 1 smaller element (1). <br>
To the right of 6 there is 1 smaller element(1) <br>
To the right of 1 there is 0 smaller element. <br>

Example 2: <br>
Input: nums = [-1] <br>
Output: [0] <br>

Example 3: <br>
Input: nums = [-1, -1] <br>
Output: [0, 0] <br>

Constraints:
<ul><li>
  1 <= nums.length <= 10<sup>5 </sup> </li>
  <li>-10<sup>4</sup> <= nums[i] <= 10<sup>4 </sup></li>
  </ul>

--------------------------------------------------

(Medium) 2063. Vowels of All Substrings <br>
Given a string word, return the sum of the number of vowels ('a', 'e', 'i', 'o' and 'u') in every substring of word
A substring is a contiguous (non-empty) sequence of characters within a string. <br>

Note: Due to the large constraints, the answer may not fit in a signed 32 bit integer. Please be careful during the calculations.

Example 1: <br>
Input: word = "aba" <br>
Output: 6 <br>
Exaplanation: All possible substrings are "a", "ab", "aba", "b", "ba", and "a". <br>
"b" has 0 vowels in it <br>
"a", "ab", "ba" and "a" have 1 vowel each <br>
"aba" has 2 vowels in it <br>
Hence, the total sum of vowels = 0+1+1+1+1+2 = 6 <br>

Example 2: <br>
Input: word = "abc" <br>
Output: 3 <br>
Explanation: All possible substrings are "a", "ab", "abc", "b", "bc" and "c" <br>
"a", "ab" and "abc" have 1 vowel each <br>
"b", "bc" and "c" have 0 vowels each <br>
Hence the sum of vowels = 1 + 1 + 1 + 0 + 0 + 0 = 3 <br>

Example 3: <br>
Input: word = "ltcd"
Output: 0
Explanation: There are no vowels in any substring of "ltcd" <br>

Constraints: <ul><li>
  1 <= word.length <= 10<sup>5</sup> </li>
  <li>word consists of lowecase English letters</li>
  </ul>

----------------------------------------------------------------

(Hard) 857. Minimum Cost to Hire K Workers <br> 

There are n workers. You are given two integer arrays quailty and wage where quality[i] is the quality of the ith worker and wage[i]
is the minimum wage expectation for the ith worker. We want to hire exactly k workers to form a paid group. To hire
a group of k workers, we must pay them according to the following rules: <br>

1. Every worker in the paid group should be paid in the ratio of their quality compared to other workers in the paid group. <br>
2. Every worker in the paid group must be paid at least their mimimum wage expectation. <br>

Given the integer k, return the least amount of money needed to form a paid group satisfying the above conditions. 
Answers within 10<sup>-5</sup> of the actual answer will be accepted.

Example 1:
<b>Input</b>: quality = [10, 20, 5],  wage = [70, 50, 30], k=2
<br>
<b>Output</b>: 105.000
<br>
<b>Explanation</b>: we pay 70 to the 0th worker and 35 to the 2nd worker
<br>
<br>
Example 2: <br>
<b>Input</b>: quality = [3, 1, 10, 10, 1],  wage = [4, 8, 2, 2, 7], k=3 <br>
<b>Output</b>: 30.6667 <br>
<b>Explanation</b>: we pay 4 to the 0th worker and 13.3333 to the 2nd and 3rd worker seperately <br>

Constraints:
<ul> 
  <li>n == quality.length == wage.length</li>
  <li>1 <= k <= n <= 10<sup>4</sup></li>
  <li>1 <= quality[i], wage[i] <= 10<sup>4</sup></li>
</ul>
--------------------------------------------------------------------

(Medium)  198. House Robber <br>

You are a professional robber pkanning to rob houses along a street. Each house has a certain amount of money stashed,
the only constraint stopping you from robbing each of them is that adjeacent houses have security systems conneced 
and it will automatically contact the police if two adjeacent houses were broken into on the same night. <br>

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight 
without alerting the police. <br>

Example 1: <br>
Input: nums = [1, 2, 3, 1] <br>
Output: 4 <br>
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3) <br>
Total amount you can rob = 1 + 3 = 4 <br>

Example 2: <br>
<b>Input</b>: nums = [2, 7, 9, 3, 1] <br>
<b>Output</b>: 12 <br>
<b>Explanation</b>: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1) <br>
Total amount you can rob = 2+9+1= 12 <br>

Constraints:
<ul>
  <li> 1<= nums.length <= 100 </li>
  <li> 0 <= nums[i] <= 400 </li>
</ul>

---------------------------------------------------

(Medium) 7. Reverse Integer <br>

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32 bit integer range [-2<sup>32</sup>, 2<sup>31</sup>-1] then return 0. <br>

<b>Assume the enviornment does not allow you to store 64 bit integers (signed or unsigned)</b><br>

Example 1: <br>

Input: x = 123 <br>
Output: 321 <br><br>

Example 2:<br>

Input: x= -123 <br>
Output: -321 <br><br>

Example 3: <br>
Input: x = 120 <br>
Output: 21 <br><br>

Constraints:<ul><li>
  -2<sup>31</sup> <= x <= 2<sup>31</sup>-1 </li></ul>

----------------------------------------------------
(Medium) 907. Sum of Subarray Minimums
Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr.
Since the answer may be large, return the answer modulo 10<sup>9</sup>+7

Example 1:
<b>Input</b>: arr = [3, 1, 2, 4]
<b>Output</b>: 17 <br>
Explanation: 
Subarrays are [3], [1], [2], [4], [3, 1], [1, 2], [2, 4], [3, 1, 2], [1, 2, 4], [3, 1, 2, 4]
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1
Sum is 17

Example 2:
Input: arr = [11, 81, 94, 43, 3]
Output: 444

Constraints:
<ul><li>1 <= arr.length <= 3 *10<sup>4</sup></li>
  <li> 1 <= arr[i] <= 3 *10<sup>4</sup></li>
</ul>


--------------------------------------------------------------------------------
(Medium) 1488. Avoid Flood in The City <br>

Your country has an infinite number of lakes. Initially, all the lakes are empty, but when it rains over the nth lake, the nth lake becomes full of water. If it rains over a lake that is full of water, there will be a <b>flood</b>. Your goal is to avoid floods in any lake. <br>

Given an integer array rains where: <br><ul>
  <li>rains[i] > 0 means there will be rains over the rains[i] lake.</li>
<li>rains[i] == 0 means there are no rains this day and you choose <b>one lake</b> this day and dry it</li></ul><br>

Return an array ans where: <br><ul>
  <li> ans.length == rains.length</li>
  <li> ans[i] == -1 if rains[i] >0 </li>
  <li> ans[i] is the lake you choose to dry in the ith day if rains[i] == 0 </li></ul><br>

If there are multiple valid answers return any of them. If it is impossible to avoid floods return <b>an empty array</b>
Notice that if you chose to dry a full lake, it becomes empty, but if you chose to dry an empty lake, nothing changes.

Example 1:
Input: rains = [1, 2, 3, 4] <br>
Output : [-1, -1, -1, -1] <br>
Explanation: After the first day full lakes are [1] <br>
After the second day full lakes are [1, 2] <br>
After the third day full lakes are [1, 2, 3] <br>
After the fourth day full lakes are [1, 2, 3, 4] <br>
There's no day to dry any lake and there is no flood in any lake <br>

Example 2:<br>
<b>Input</b>: rains = [1, 2, 0, 0, 2, 1] <br>
<b>Output</b> : [-1, -1, 2, 1, -1, -1] <br>
<b>Explanation</b>: After the first day full lakes are [1] <br>
After the second day full lakes are [1, 2] <br>
After the third day we dry lake 2. Full lakes are [1] <br>
After the fourth day we dry lake 1. There is no full lakes. <br>
After the fifth day, full lakes are [2]. <br>
After the sixth day, full lakes are [1, 2]. <br>
It is easy to that this scenario is flood-free. [-1, -1, 1, 2, -1, -1] is another acceptable scenario. <br>

Example 3: <br>
<b>Input</b>: rains = [1, 2, 0, 1, 2] <br>
<b>Output</b>: [] <br>
<b>Explanation</b>: After the second day, full lakes are [1, 2]. We have to dry one lake on the third day. After that, it will rain over lakes [1, 2]. It's easy to prove that no matter which lake you choose to dry in the 3rd day, the other one will flood.

Constraints:
<ul><li> 1 <= rains.length <= 10<sup>5</sup> </li>
  <li> 0<=rains[i] <= 10<sup>9</sup></li>
  </ul>
