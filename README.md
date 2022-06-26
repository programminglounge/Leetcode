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
<b>Input</b>: dividend = 7, divisor = -3
<br>
<b>Output</b>: -2
<br>
<b>Explanation</b>: 7/-3 = -2.3333 which is truncated to -2.
<br>
<br>

Constraints: <ul><li>
  -2<sup>31</sup> <= dividend, divisor <= 2<sup>31</sup> -1 </li>
  <li>divisor != 0 </li>
  </ul>

---------------------------------------------------

50. Pow(x, n)  (Medium,  powxn.cpp)
Implement pow(x, n) which calculates x raised to the power n (i.e., x<sup>n</sup>)

Example 1: 
<br>
<b>Input</b>: x= 2.0, n = 10
<br>
Output: 1024.0
<br>

Example 2: 
<br>
  <b>Input</b>: x= 2.1, n = 3
<br>
  <b>Output</b>: 9.261
<br>

Example 3:
<br>
<b>Input</b>: x = 2.0, n = -2
<br>
<b>Output</b>: 0.25

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
<b>Input</b>: nums = [-1] <br>
<b>Output</b>: [0] <br>

Example 3: <br>
<b>Input</b>: nums = [-1, -1] <br>
<b>Output</b>: [0, 0] <br>

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

Example 1:<br>
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
<b>Explanation</b>: we pay 4 to the 0<sup>th</sup> worker and 13.3333 to the 2<sup>nd</sup> and 3<sup>rd</sup> worker seperately <br>

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
<b>Input</b>: nums = [1, 2, 3, 1] <br>
<b>Output</b>: 4 <br>
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
Since the answer may be large, return the answer modulo 10<sup>9</sup>+7 <br>

Example 1: <br>
<b>Input</b>: arr = [3, 1, 2, 4] <br>
<b>Output</b>: 17 <br>
<b>Explanation</b>: <br>
Subarrays are [3], [1], [2], [4], [3, 1], [1, 2], [2, 4], [3, 1, 2], [1, 2, 4], [3, 1, 2, 4] <br>
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1 <br>
Sum is 17 <br>

Example 2: <br>
<b>Input</b>: arr = [11, 81, 94, 43, 3] <br>
<b>Output</b>: 444 <br>

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
  
------------------------------------------------------------------------------------

172. Factorial Trailing Zeroes (Medium, TrailingZeros.cs)

Given an integer n, return the number of trailing zeros in n!

<b>Example 1:</b><br>
<b>Input:</b> n = 3 <br>
<b>Output:</b> 0 <br>
<b>Explanation:</b> 3! = 6. no trailing zero<br>

<b>Example 2:</b><br>
<b>Input:</b> n = 5 <br>
<b>Output:</b> 1 <br>
<b>Explanation:</b> 5! = 120. one trailing zero<br>

<b>Example 3:</b><br>
<b>Input:</b> n = 0 <br>
<b>Output:</b> 0 <br>

<b>Constraints:</b><br>

<ul><li> 0 <= n <= 10<sup>4</sup> </li></ul>

-----------------------------------------------------------------------------

189. Rotate Array (Medium) <br>

Given an array, rotate the array to the right by k steps, where k is non-negative.<br>

<b>Example 1:</b><br>
<b>Input:</b> nums = [1, 2, 3, 4, 5, 6, 7], k=3 <br>
<b>Output :</b> [5, 6, 7, 1, 2, 3, 4]<br>
<b>Explanation:</b><br>
rotate 1 step to the right: [7, 1, 2, 3, 4, 5, 6] <br>
rotate 2 steps to the right: [6, 7, 1, 2, 3, 4, 5] <br>
rotate 3 steps to the right: [5, 6, 7, 1, 2, 3, 4] <br>

<b>Example 2:</b><br>
<b>Input:</b> nums = [-1, -100, 3, 99], k=2 <br><br>
<b>Output :</b> [3, 99, -1, -100]<br><br>
<b>Explanation:</b><br>
rotate 1 step to the right: [99, -1, -100, 3] <br>
rotate 2 steps to the right: [3, 99, -1, -100] <br>

<b>Constraints:</b>
<ul><li> 1<= nums.length <= 10<sup>5</sup></li>
  <li>-2<sup>31</sup> <= nums[i] <= 2<sup>31</sup> -1</li>
  <li> 0 <= k <= 10<sup>5</sup></li>
  </ul>
  
-------------------------------------------------------------------

2289. Steps to Make Array Non-decreasing (Medium) <br>
You are given a 0-indexed integer array nums. In one step, remove all elements nums[i] where nums[i-1] > nums[i] for all 0<i<nums.length

Return the number of steps performed until nums becomes a <b>non-decreasing</b> array.

<b>Example 1:</b><br>
<b>Input:</b> nums = [5, 3, 4, 4, 7, 3, 6, 11, 8, 5, 11] <br>
<b>Output:</b> 3<br>
<b>Explanation:</b> The following are the steps performed:<br>
- Step 1: [5, <b>3</b>, 4, 4, 7, <b>3</b>, 6, 11, <b>8</b>, <b>5</b>, 11] becomes
[5, 4, 4, 7, 6, 11, 11]. <br>
- Step 2: [5, <b>4</b>, 4, 7, <b>6</b>, 11, 11] becomes [5, 4, 7, 11, 11]. <br>
- Step 3: [5, <b>4</b>, 7, 11, 11] becomes [5, 7, 11, 11]<br>
[5, 7, 11, 11] is a non-decreasing array. Therefore, we return 3.<br>

<b>Example 2:</b><br>
<b>Input:</b> nums = [4, 5, 7, 7, 13] <br>
<b>Output:</b> 0 <br>
<b>Explanation:</b> nums is alrady a non-decreasing array. Therefore, we return 0<br>

<b>Constraints:</b>
<ul><li>1 <= nums.length <= 10<sup>5</sup></li>
  <li> 1 <= nums[i] <= 10<sup>9</sup></li></ul>
    
--------------------------------------------------------------------

2240. Number of Ways to Buy Pens and Pencils (Medium) <br>

You are given an integer total indicating the total amount of money you have. You are also given two integers cost1 and cost2 indicating the price of a pen and pencil respectively. You can spend part or all of your money to buy multiple quantities (or none) of each kind of writing utensil.<br>
  
Return the number of distinct ways you can buy some number of pens and pencils.<br>
  
<b>Example 1:</b><br>
Input: total = 20, cost1 = 10, cost2 = 5<br>
Output: 9<br>
Explanation: The price of a pen is 10 and the price of a pencil is 5.<br>
-If you buy 0 pens, you can buy 0, 1, 2, 3 or 4 pencils<br>
-If you buy 1 pen, you can buy 0, 1 or 2 pencils<br>
-If you buy 2 pens, you can not buy any pencils.<br>
 The total number of ways to buy pens and pencils is 5+3+1 = 9<br>
  
Example 2: <br>
Input: total = 5, cost1 = 10, cost2 = 10 <br>
Output: 1 <br>
Explanation: The price of both pens and pencils are 10, which cost more than total, so you cannot buy any writing utensils. Therefore, there is only one way: buy 0 pens and 0 pencils<br>
  
Constraints:<br>
  <ul><li> 1 <= total, cost1, cost2 <= 10<sup>6</sup></li></ul><br>
    
-----------------------------------------------------------------------
 
2244. Minimum Rounds to Complete All tasks <br>

You are given a 0-indexed integer array tasks, where tasks[i] represents the difficulty level of a task. In each round, you can complete either 2 or 3 tasks of the same <b>difficulty level</b>.
Return the <b>minimum</b> rounds required to complete all the tasks or -1 if it is not possible to complete all the tasks. Br>
  
<b>Example 1:</b><br>
<b>Input:</b> tasks = [2, 2, 3, 3, 2, 4, 4, 4, 4, 4] <br>
Output: 4
Explanation: To complete all the tasks, a possible plan is: 
-In the first round, you complete 3 tasks of difficulty level 2
-In the second round, you complete 2 tasks of difficulty level 3
-In the third round, you complete 3 tasks of difficulty level 4
-In the fourth round, you complete 2 tasks of difficulty level 4
It can be shown that all the tasks cannot be completed in fewer than 4 rounds, so the answer is 4

Example 2:
Input: tasks = [2, 3, 3]
Output: -1
Explanation: There is only 1 task of difficulty level 2, but in each round, you can only complete either 
2 or 3 tasks of the same difficulty level. Hence you cannot complete all the tasks, and the answer is -1.
  
Constraints:
  <ul><li> 1<= tasks.length <=10<sup>5</sup> </li>
  <li> 1 <= tasks[i] <= 10<sup>9</sup> </li></ul>
  
------------------------------------------------------------------------------------

2233. Maximum Product After K Increments (Medium) <br>

You are given an array of non-negative integers nums and an integer k. In one operation, you may choose <b>any</b> element from nums and increment it by 1
Return the maximum product of nums after at most k operations. Since the answe may be very large return ir modulo 10<sup>9</sup> + 7

Example 1:<br>
Input: nums = [0, 4], k = 5 <br>
<b>Output:</b> 20 <br>
Explanation: Increment the first number 5 times. Now nums = [5, 4], with a product of 5*4 = 20 <br>
It can be shown that 20 is maximum product possible, so we return 20<br>
Note that there may be other ways to increment nums to have the maximum product <br>

Example 2:
Input: nums = [6, 3, 3, 2], k = 2
Output: 216
Explanation: Increment the second number 1 time and increment the fourth number 1 time.
Now nums =[6, 4, 3, 3], with a product of 6*4*3*3 = 216 <br>
It can be shown that 216 is maximum product

<b>Constraints:</b><br>
<ul><li> 1 <= nums.length, k <=10<sup>5</sup></li>
  <li> 0 <= nums[i] <=10<sup>6</sup></li></ul>
-------------------------------------------------------------------------------------------

2139. Minimum Moves to Reach Target Score (Medium) <br><br>

You are playing a game with integers. You start with the integer 1 and you want to reach the integer target.

In one move you can either"
<ul><li><b>Increment</b> the current integer by one (i.e., x = x + 1)</li>
  <li><b>Double</b> the current integer (i.e., x = 2 * x)</li></ul>
  
You can use the <b>increment</b> operation amu number of times, however you can only use the double operation at most maxDoubles times.

Given the two integers target and maxDoubles, return the minimum number of moves needed to reach target starting with 1.

Example 1:
Input: target = 5, maxDoubles = 0
Output: 4
Explanation: Keep incrementing by 1 until you reach target

Example 2:
<b>Input:</b> target = 19, maxDoubles = 2 <br>
<b>Output:</b> 7<br>
<b>Explanation:</b> Initially, x=1<br> 
Increment 3 times so x= 4 <br>
Double once so x = 8<br>
Increment once so x = 9 <br>
Double again so x = 18 <br>
Increment once so x= 19 <br>

<b>Example 3:</b><br>
<b>Input:</b> target = 10, maxDoubles = 4 <br>
<b>Output:</b> 4<br>
<b>Explanation:</b> Initially, x = 1 <br>
Increment once so x=2<br>
Double once so x = 4 <br>
Increment once so x = 5 <br>
Double again so x = 10 <br>

<b>Constraints:</b>
<ul><li>1 <=target <= 10<sup>9</sup></li></ul>
<li> 0 <= maxDoubles <= 100</li></ul>
----------------------------------------------------------------------------

2007. Find Original Array from Doubled Array (Medium) <br><br>

An integer array original is transformed into a doubled array changed by appending twice the value of every element in original, and then randomly shuffling the resulting array.<br>

Given an array changed, return original if changed is a doubled array. if changed is not a doubled array, return an empty array. The elements in original may be returned in <b>any</b> order<br>

<b>Example 1:</b><br>
<b>Input:</b> changed = [1, 3, 4, 2, 6, 8]
<b>Output:</b> [1, 3, 4]
<b>Explanation:</b> One possible original array could be [1, 3, 4]:<br>
Twice the value of 1 is 1 *2 = 2 <br>
Twice the value of 3 is 3 *2 = 6 <br>
Twice the value of 4 is 4 *2 = 8 <br>
Other original arrays could be [4, 3, 1] or [3, 1, 4]. <br>

<b>Example 2:</b><br>
<b>Input:</b> changed = [6, 3, 0, 1]<br>
<b>Output:</b> []<br>
<b>Explanation:</b> changed is not a doubled array.

<b>Example 3:</b><br>
Input: changed = [1]
Output: []
Explanation: changed is not a doubled array

Constraints:
<ul><li> changed.length <= 10<sup>5</sup></li>
<li>0 <= changed[i] <= 10<sup>5</sup></li></ul>

--------------------------------------------------------------------------

1980. Find Unique Binary String (Medium) <br><br>

Given an array of strings nums cotaining n <b>unique</b> binary strings each of length n, return a binary string of length n that does not appear in nums. If there are multiple answers, you may return <b>any</b> of them<br>

<b>Example 1</b>:<br>
Input: nums = ["01", "10"]<br>
Output: "11"<br>
Explanation: "11" does not appear in nums, "00" would also be correct.<br><br>

<b>Example 2:</b><br>
<b>Input:</b> nums = ["00", "01"]<br>
<b>Output:</b> "11"<br>
<b>Explanation:</b> "11" does not appear in nums. "10" would also be correct<br>

<b>Example 3:</b> <br>
<b>Input:</b> nums = ["111", "011", "001"]<br>
<b>Output:</b> "101"<br>
<b>Explanation:</b> "101" does not appear in nums. "000", "010", "100", and "110" would also be correct.

-------------------------------------------------------------------------

2191. Sort the Jumbled Numbers (Medium) <br><br>

You are given a <b>0-indexed</b> integer array mapping which represents the mapping rule of a shuffled decimal system. mapping[i] = j means digit i should be mapped to digit j in this system.<br>

The <b>mapped value</b> of an integer is the new integer obtained by replacing each occurence of digit i in the integer with mapping[i] for all 0 <= i <= 9. <br>

You are also given anoter integer array nums. Return the array nums sorted in non-decreasing order based on the mapped values of its elements. <br>

<b>Notes:</b>
<ul><li>Elements with the same mapped values should appear in the <b>same relative order</b> as in the input</li>
  <li> The elements of nums should only be sorted based on their mapped values and <b>not be replaced</b> by them.</li></ul>

<b>Example 1:</b> <br>
<b>Input:</b> mapping = [8, 9, 4, 0, 2, 1, 3, 5, 7, 6], nums = [991, 338, 38] <br>
<b>Output: </b> [338, 38, 991] <br>
<b>Explanation: </b> <br>
Map the number 991 as follows: <br>
1. Mapping[9] = 6, so all occurences of the digit 9 will become 6. <br>
2. Mapping[1] = 9, so all occurences of the digit 1 will become 9. <br>
Therefore, the mapped value of 991 is 669. 338 maps to 007, or 7, which is also 7 after removing the leading zeros. <br>
38 maps to 07, which is also 7 after removing leading zeros. Since 338 and 38 share the same mapped value, they should remain in the same relative order, so 338 comes before 38. <br>
Thus, the sorted array is [338, 38, 991]. <br>

<b>Example 2:</b><br>
<b>Input: </b> mapping = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9], nums = [789, 456, 123] <br>
<b>Output :</b> [123, 456, 789]
<b> Explanation: </b> 789 maps to 789, 456 maps to 456, and 123 maps to 123. Thus the sorted array is [123, 456, 789].

<b>Constraints:</b>
<ul><li> mapping.length == 10 </li>
  <li> 0 <= mapping[i] <= 9 </li>
  <li> All the values of mapping[i] are <b>unique</b> </li>
  <li> 1 <= nums.length <= 3* 10<sup>4</sup></li>
  <li> 0 <= nums[i] < 10<sup>9</sup></li></ul>
  
--------------------------------------------------------------------------------

2225. Find players with zero or one losses (Medium) <br><br>

You are given an integer array matches where matches[i]=[winner<sub>i</sub>, loser<sub>i</sub>] indicates that the player winner<sub>i</sub> defeated player loser<sub>i</sub> in a match. <br>

Return a list answer of size 2 where
<ul><li> answer[0] is a list of all players that have not lost any matches. </li>
  <li>answer[1] is a list of all players that have lost exactly one match. </li></ul>
  
The values in the two lists should be returned in <b>increasing</b> order.

<b>Note:</b><br>
<ul><li>You should only consider the players that have played at least one match.</li>
  <li>the test cases will be generated such that no two matches will have the same outcome</li></ul>
  
<b> Example 1: </b><br>
<b>Input : </b> matches =[[1, 3], [2, 3], [3, 6], [5, 6], [5, 7], [4, 5], [4, 8], [4, 9], [10, 4], [10, 9]] <br>
<b>Output: </b> [[1, 2, 10], [4, 5, 7, 8]]
<b>Explanation: </b>Players 1, 2, and 10 have not lost any matches. Players 4, 5, 7, and 8 have each lost one match. Players 3, 6, and 9 each have lost two matches.

<b>Example 2:</b><br>
<b>Input: </b>matches = [[2, 3], [1, 3], [5, 4], [6, 4]]
<b>Output: </b>[[1, 2, 5, 6], []]
<b>Explanation: </b> Players 1, 2, 5, and 6 have not lost any matches. Players 3 and 4 each have lost two matches. Thus, answer[0]=[1, 2, 5, 6] and answer[1] = []


<b>Constraints: </b>
<ul><li>1 <= matches.length <= 10<sup>5</sup></li>
  <li> matches[i].length == 2 </li>
  <li> 1 <= winner<sub>i</sub>, loser<sub>i</sub> <= 10<sup>5</sup></li>
  <li> winner<sub>i</sub> != loser<sub>i</sub></li>
  <li> All matches[i] are <b>unique</b></li></ul>
  
---------------------------------------------------------------------------

2183. Count Array Pairs Divisble by K (Hard) <br><br>

Given a zero indexed integer array nums of length n and an integer k, return the <b>number of pairs</b> (i, j) such that:
<ul><li> 0<= i < j <= n-1 and</li>
  <li> nums[i] * nums[j] is divisble by k. </li></ul><br>

<b>Example 1:</b><br>
<b> Input:</b> nums = [1, 2, 3, 4, 5], k=2 <br>
<b> Output:</b> 7 <br>
<b> Explanation:</b> The 7 pairs of indices whose corresponding products are divisble by 2 are (0, 1), (0, 3), (1, 2), (1, 3), (1, 4), (2, 3), and (3, 4).<br>
Their products are 2, 4, 6, 8, 10, 12 and 20 respectively
Other pairs such as (0, 2) and (2, 4) have products 3 and 15 repectively, which are not divisible by 2. <br>

<b>Example 2:</b><br>
<b>Input: </b>nums = [1, 2, 3, 4], k=5<br>
<b>Output: </b> 0 <br>
<b>Explanation: </b>There does not exist any pair of indices whose corresponding product is divisible by 5<br>

<b>Constraints: </b>
<ul><li> 1<= nums.length <= 10<sup>5</sup></li>
  <li> 1 <= nums[i], k <= 10<sup>5</sup></li></ul>
  
--------------------------------------------------------------------------
