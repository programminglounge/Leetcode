# Leetcode
In this repository I solve some of the medium and hard problems on Leetcode 

<a href = #problem7>7. Reverse Integer (Medium)</a>

<a href = #problem29>29. Problem 1 </a>

<a href = #problem50> 50. Pow(x, n) </a> 

<a href = #problem172> 172. Factorial Trailing Zeroes (Medium, TrailingZeros.cs) </a>

<a href = #problem189> 189. Rotate Array (Medium) </a>

<a href = #problem198> 198. House Robber (Medium) </a>

<a href = #problem315> 315. Count of Smaller Numbers After Self (Hard) </a>

<a href = #problem857> 857. Minimum Cost to Hire K Workers (Hard) </a> 

<a href = #problem907> 907. Sum of Subarray Minimums (Medium) </a>

<a href = #problem1488> 1488. Avoid Flood in The City (Medium) </a>

<a href = #problem1877> 1877. Minimize Maximum Pair Sum in Array (Medium) </a>

<a href = #problem1881> 1881. Maximum Value after Insertion (Medium) </a>

<a href = #problem1910> 1910. Remove All occurrences of a Substring (Medium) </a>

<a href = #problem1921> 1921. Eliminate Maximum Number of Monsters (Medium) </a>

1936. Add Minimum number of Rungs (Medium)

1980. Find Unique Binary String (Medium)

2007. Find Original Array from Doubled Array (Medium)

2058. Find the Minimum and Maximum Number of Nodes Between Critical Points (Medium)

2063. Vowels of All Substrings (Medium)

2064. Minimized Maximum of Products Distributed to Any Store (Medium)

2075. Decode the slanted Ciphertext (Medium)

2139. Minimum Moves to Reach Target Score (Medium)

2150. Find All Lonely Numbers in the Array (Medium)

2183. Count Array Pairs Divisble by K (Hard)

2186. Minimum Number of Steps to Make Two Strings Anagram II (Medium)

2191. Sort the Jumbled Numbers (Medium)

2225. Find players with zero or one losses (Medium)

2226. Maximum Candies Allocated to K Children (Medium)

2233. Maximum Product After K Increments (Medium)

2240. Number of Ways to Buy Pens and Pencils (Medium)

2244. Minimum Rounds to Complete All tasks

2249. Count Lattice Points inside a Circle (Medium)

2289. Steps to Make Array Non-decreasing (Medium)

2300. Successful Pairs of Spells and Potions (Medium)

2320. Count Number of Ways to Place Houses (Medium)

2322. The Latest Time to Catch a Bus (Medium)

2333. Minimum Sum of Squared Difference (Medium)

--------------------------------------

<a id = "problem7">7. Reverse Integer (Medium)  <br></a>

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

<a id = "problem50">50. Pow(x, n)  (Medium,  powxn.cpp) <br> </a>
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

<b>Constraints:</b> <ul><li>
  -100.0 < x < 100.0</li>
  <li>-2<sup>31</sup> <= n <= 2<sup>31</sup>-1</li>
<li>-10<sup>4</sup> <= x<sup>n</sup> <= 10<sup>4</sup></li>
</ul>

--------------------------------------------------

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

198. House Robber (Medium) <br>

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

315. Count of Smaller Numbers After Self (Hard) <br><br>
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

857. Minimum Cost to Hire K Workers (Hard) <br> 

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
  <li>1 <= quality[i], wage[i] <= 10<sup>4</sup></li></ul>

--------------------------------------------------------------------

907. Sum of Subarray Minimums (Medium) <br><br>
Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr.
Since the answer may be large, return the answer modulo 10<sup>9</sup>+7 <br>

<b>Example 1:</b> <br>
<b>Input</b>: arr = [3, 1, 2, 4] <br>
<b>Output</b>: 17 <br>
<b>Explanation</b>: <br>
Subarrays are [3], [1], [2], [4], [3, 1], [1, 2], [2, 4], [3, 1, 2], [1, 2, 4], [3, 1, 2, 4] <br>
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1 <br>
Sum is 17 <br>

<b>Example 2:</b> <br>
<b>Input</b>: arr = [11, 81, 94, 43, 3] <br>
<b>Output</b>: 444 <br>

Constraints:
<ul><li>1 <= arr.length <= 3 *10<sup>4</sup></li>
  <li> 1 <= arr[i] <= 3 *10<sup>4</sup></li>
</ul>

--------------------------------------------------------------------------------

1488. Avoid Flood in The City (Medium) <br>

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

1877. Minimize Maximum Pair Sum in Array (Medium) <br>

The <b>pair sum</b> of a pair (a, b) is equal to a+b. The maximum pair sum is the largest pair sum in a list of pairs. <br>

For example, if we have pairs (1, 5), (2, 3) and (4, 4), the maximum pair sum would be max(1+5, 2+3, 4+4) = max (6, 5, 8) = 8 <br>

Given an array nums of even length n, pair up the elements of nums into n/2 pairs such that
<ul><li>Each element of nums is in <b>exactly one</b> pair</li>
  <li> The <b>maximum pair sum</b> is <b>minimized</b></li></ul><br><br>
  
Return the minimized <b>maximum pair sum</b> after optimally pairing up the elements.

<b>Example 1:</b> <br>
<b>Input:</b> nums = [3, 5, 2, 3] <br>
<b>Output:</b> 7 <br>
<b>Explanation:</b> The elements can be paired up into pairs (3, 3) and (5, 2). The maximum pair sum is max(3+3, 5+2) = max(6, 7) = 7.<br>


<b>Example 2:</b> <br>
<b>Input:</b> nums = [3, 5, 4, 2, 4, 6] <br>
<b>Output:</b> 8 <br>
<b>Explanation:</b> The elements can be paired up into pairs (3, 5), (4, 4) and (6, 2). The maximum pair sum is max(3+5, 4+4, 6+2) = max(8, 8, 8) = 8.<br>


<b>Constraints: </b><br>
<ul><li> n == nums.length </li>
  <li> 2 <= n <= 10<sup>5</sup></li>
  <li><b>n</b> is even</li>
  <li> 1 <= nums[i] <= 10<sup>5</sup></li></ul>
  
----------------------------------------------------------------------------

1881. Maximum Value after Insertion (Medium) <br><br>

You are given a very large integer n, represented as a string, and an integer digit x. The digits in n and the digit x are in the <b>inclusive</b> range [1, 9], and n may represent a <b>negative</b> number.
You want to <b>maximize</b> n's numerical value by inserting x anywhere in the decimal represnetaton of n. You cannot insert x to the left of the negative sign. <br>

<ul><li> For example, if n= 73 and x = 6, it would be best to insert it between 7 and 3, making n = 763 </li>
  <li>if n = -55 and x=2 , it would be best to insert it before the first 5, making n=-255</li></ul>
  
Return a string representing the maximum value of n after the insertion:

<b>Example 1:</b> <br>
<b>Input:</b> n = "99", x = 9 <br>
<b>Output:</b> "999" <br>
<b>Explanation:</b> The result is the same regardless of where you insert 9.<br>

<b>Example 2:</b> <br>
<b>Input:</b> n = "-13", x = 2 <br>
<b>Output:</b> "-123" <br>
<b>Explanation:</b> you can make n one of {-213, -123, -132} and the largest of those three is -123.<br>

<b>Constraints: </b><br>
<ul><li> 1 <= n.length <= 10<sup>5</sup> </li>
  <li> 1 <= x <= 9</li>
  <li>The digits in n are in the range [1, 9]</li>
  <li> n is a valid representation of an integer.</li>
  <li> in the case of a negative n, it will begin with '-' </li></ul>

--------------------------------------------------------------------------------------

1910. Remove All occurrences of a Substring (Medium) <br><br>

Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:
<ul><li> Find the <b>leftmost</b> occurrence of the substring part and <b>remove</b> it from s.</li></ul> <br>

Return s after removing all occurrences of part <br>

A <b>substring</b> is a contiguous sequence of characters in a string<br>

<b>Example 1:</b> <br>
<b>Input:</b> s = "daabcbaabcbc", part = "abc" <br>
<b>Output:</b> "dab" <br>
<b>Explanation:</b> The following operations are done:<br>
- s = "da<b>abc</b>bccbcbc", remove "abc" starting at index 2, so s = "dabaabcbc".<br>
- s = "daba<b>abc</b>bc", remove "abc" starting at index 4, so s = "dababc"<br>
- s = "daba<b>abc</b>", remove "abc" starting at index 3, so s = "dab"<br>
Now s has no occurrences of "abc"<br>

<b>Example 2:</b> <br>
<b>Input:</b> s = "axxxxyyyyb", part = "xy" <br>
<b>Output:</b> "ab" <br>
<b>Explanation:</b> The following operations are done:<br>
- s = "axxx<b>xy</b>yyyb", remove "xy" starting at index 4, so s = "axxxyyyb".<br>
- s = "axx<b>xy</b>yyb", remove "xy" starting at index 3, so s = "axxyyb"<br>
- s = "ax<b>xy</b>yb", remove "xy" starting at index 2, so s = "axyb"<br>
- s = "a<b>xy</b>b", remove "xy" starting at index 1, so s = "ab"<br>
Now s has no occurrences of "ab"<br>

<b>Constraints:</b>
<ul><li> 1<= s.length <= 1000  </li>
  <li>1 <= part.length <= 1000 </li>
  <li> s and part consists of lowercase English letters.</li>
</ul>

-----------------------------------------------------------------

1921. Eliminate Maximum Number of Monsters (Medium) <br><br>

You are playing a video game where you are defending your city from a group of n monsters. You are given a <b>0-indexed</b> integer array dist of size n, where dist[i] is the <b>initial distance</b> in kilometers of the i<sup>th</sup> monster from the city. <br>

The monsters walk towards the city at a <b>constant</b> speed. The speed of each monster is given to you in an integer array <b>speed</b> of size n, where speed[i] is the speed of the i<sup>th</sup> monster in kilometers per minute.<br>

You have a weapon that, once fully charged, can eliminate a <b>single</b> monster. However, the weapn takes <b>one minute</b> to charge. The weapon is fully charged at the very start.<br>

You lose when any monster reaches your city. If a monster reachers the city at the exact moment the weapon is fully charged, it counts as a <b>loss</b> and the game ends before you can use your weapon.<br>

Return the <b>maximum</b> number of monsters that you can eliminate before you lose, or n, if you can eliminate all the monsters before they reach the city. <br>

<b>Example 1:</b> <br>
<b>Input:</b> dist = [1, 3, 4], speed = [1, 1, 1] <br>
<b>Output:</b> 3 <br>
<b>Explanation:</b> In the beginning, the distance of the monsters is [1, 3, 4]. You eliminate the first monster. <br>
After a minute, the distances of the monsters are [X, 2, 3]. You elinimate the second monster.<br>
After a minute, the distance of the monsters are [X, X, 2]. You eliminate the third monster. All 3 monsters can be eliminated.<br>


<b>Example 2:</b> <br>
<b>Input:</b> dist = [1, 1, 2, 3], speed = [1, 1, 1, 1] <br>
<b>Output:</b> 1 <br>
<b>Explanation:</b> In the beginning, the distance of the monsters is [1, 1, 2, 3]. You eliminate the first monster. <br>
After a minute, the distances of the monsters are [X, 0, 1, 2], so you lose<br>
You can only eliminate 1 monster<br>

<b>Example 3:</b> <br>
<b>Input:</b> dist = [3, 2, 4], speed = [5, 3, 2] <br>
<b>Output:</b> 1 <br>
<b>Explanation:</b> In the beginning, the distance of the monsters is [3, 2 ,4]. You eliminate the first monster. <br>
After a minute, the distances of the monsters are [X, 0, 2], so you lose<br>
You can only eliminate 1 monster<br>

<b>Constraints: </b><br>
<ul><li> n == dist.length == speed.length</li>
  <li> 1 <= n <= 10 <sup>5</sup></li>
  <li> 1 <= dist[i], speed[i] <=10<sup>5</sup></li></ul>
  
------------------------------------------------------------------ 

1936. Add Minimum number of Rungs (Medium) <br><br>

You are given a <b>strictly increasing</b> integer array rungs that represents the <b>height</b> of rungs on a ladder. You are currently on the <b>floor</b> at height 0, and you want to reach the last rung. <br>

You are also given an integer dist. You can only climb to the next highest rung if the distance between where you are currently at (the floor or on the rung) and the next rubg is <b>at most</b> dist. You are able to insert rungs at any positive <b>integer</b> height if a rund is not already there.<br>

Return the <b>minimum</b> number of rungs that must be added to the ladder in order for you to climb to the last rung. <br>

<b>Example 1:</b> <br>
<b>Input:</b> rungs = [1, 3, 5, 10], dist = 2 <br>
<b>Output:</b> 2 <br>
<b>Explanation:</b> You currently cannot reach the last rung. Add rungs at heights 7 and 8 to climb this ladder. The ladder will now have rungs at heights 7 and 8 to climb this ladder. The ladder will now have rungs at [1, 3, 5, 7, 8, 10]. <br>

<b>Example 2:</b> <br>
<b>Input:</b> rungs = [3, 6, 8, 10], dist = 3 <br>
<b>Output:</b> 0 <br>
<b>Explanation:</b> The ladder can be climbed without adding any additional rungs. <br>

<b>Example 3:</b> <br>
<b>Input:</b> rungs = [3, 4, 6, 7], dist = 2 <br>
<b>Output:</b> 1 <br>
<b>Explanation:</b> You currently cannot reach the first rung from the ground. Add a rung at height 1 to climb this ladder. The ladder will now have rungs at [1, 3, 4, 6, 7] <br>

<b>Constraints:</b>
<ul><li>1 <= rungs.length <= 10<sup>5</sup></li>
  <li>1 <= rungs[i] <= 10<sup>9</sup></li>
  <li> 1<= dist <= 10<sup>9</sup></li>
  <li> rungs is <b>strictly increasing</b></li></ul>

--------------------------------------------------

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

2058. Find the Minimum and Maximum Number of Nodes Between Critical Points (Medium) <br><br>

A <b>critical point</b> in a linked list is defined as <b>either</b> a <b>local maxima</b> or a <b>local minima.</b>
A node is a <b>local maxima</b> if the current node has a value <b>strictly greater</b> than the previous node and the next node. <br>

A node is a <b>local minima</b> if the current node has a value <b>strictly smaller</b> than the previous node and the next node. <br>

Note that a node can only be a local maxima/minima if there exists <b>both</b> a previous node and a next node. <br>

Given a linkedlist head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the <b>minimum distance</b> between <b>any two distinct</b> critical points and maxDistance is the <b>maximum distance</b> between <b>any two distinct</b> critical points. If there are fewer than two critical points, return [-1, -1]. <br>

<b>Example 1:</b> <br>
<b>Input:</b> head = [3, 1] <br>
<b>Output:</b> [-1, -1] <br>
<b>Explanation:</b> There are no critical points in [3, 1]<br><br>

<b>Example 2:</b> <br>
<b>Input:</b> head = [5, 3, 1, 2, 5, 1, 2] <br>
<b>Output:</b> [1, 3] <br>
<b>Explanation:</b> There are three critical points:<br>
-[5, 3, <b>1</b>, 2, 5, 1, 2]: The third node is a local minima because 1 is less than 3 and 2<br>
-[5, 3, 1, 2, <b>5</b>, 1, 2]: The fifth node is a local maxima because 5 is greater than 2 and 1<br>
-[5, 3, 1, 2, 5, <b>1</b>, 2]: The sixth node is a local minima because 1 is less than 5 and 2<br>
The minimum distance is between the fifth and sixth node. minDistance = 6 - 5 = 1<br>
The maximum distance is between the third and sixth node. maxDistance = 6 - 3 = 3<br>

<b>Example 3:</b> <br>
<b>Input:</b> head = [1, 3, 2, 2, 3, 2, 2, 2, 7] <br>
<b>Output:</b> [3, 3] <br>
<b>Explanation:</b> There are two critical points:<br>
-[1, <b>3</b>, 2, 2, 3, 2, 2, 2, 7]: The second node is a local maxima because 3 is greater than 1 and 2<br>
-[1, 3, 2, 2, <b>3</b>, 2, 2, 2, 7]: The fifth node is a local maxima because 3 is greater than 2 and 2<br>
Both the minimum and maximum distances are between the second and the fifth node. Thus, minDistance and maxDistance is 5 - 2 = 3
Note that the last node is not considered a local maxima because it does not have a next node.<br>

<b>Constraints:</b>
<ul><li> The number of nodes in the list is in the range [2, 10<sup>5</sup>]</li>
  <li> 1 <= Node.val <= 10<sup>5</sup></li></ul>
  
-----------------------------------------------------------------------

2063. Vowels of All Substrings (Medium) <br><br>

Given a string word, return the sum of the number of vowels ('a', 'e', 'i', 'o' and 'u') in every substring of word
A substring is a contiguous (non-empty) sequence of characters within a string. <br>

Note: Due to the large constraints, the answer may not fit in a signed 32 bit integer. Please be careful during the calculations.

<b>Example 1:</b> <br>
<b>Input:</b> word = "aba" <br>
Output: 6 <br>
Exaplanation: All possible substrings are "a", "ab", "aba", "b", "ba", and "a". <br>
"b" has 0 vowels in it <br>
"a", "ab", "ba" and "a" have 1 vowel each <br>
"aba" has 2 vowels in it <br>
Hence, the total sum of vowels = 0+1+1+1+1+2 = 6 <br>

<b>Example 2:</b> <br>
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

2064. Minimized Maximum of Products Distributed to Any Store (Medium) <br><br>

You are given an integer n indicating there are n specialty retail stores. There are m product types of varying amounts which are given as a 0-indexed integer array quantities, where quantities[i] represents the number of products of the i<sup>th</sup> product type. You need to distribute all products to the retail stores following these rules:

<ul><li>A store can only be given at most one product type but can be given any amount of it.</li>
  <li> After distribution, each store will have been given some number of products (possibly 0). Let x represent the maximum number of products given to any store. You want x to be as small as possible. i.e., you want to <b>minimize</b> the <b>maximum</b> number of products that are given to any store.</li></ul>
    
Return the minimum possible x.<br>

<b>Example 1:</b> <br>
<b>Input:</b> n = 6, quantities = [11, 6] <br>
<b>Output:</b> 3 <br>
<b>Explanation:</b> one optimal way is:
- The 11 products of type 0 are distributed to the first four stores in these amounts: 2, 3, 3, 3
- The 6 products of type 1 are distributed to the other two stores in these amounts: 3, 3 <br>
The maximum number of products given to any store is max(2, 3, 3, 3, 3, 3) = 3 <br>

<b>Example 2:</b> <br>
<b>Input:</b> n = 7, quantities = [15, 10, 10] <br>
<b>Output:</b> 5 <br>
<b>Explanation:</b> one optimal way is:
- The 15 products of type 0 are distributed to the first three stores in these amounts: 5, 5, 5
- The 10 products of type 1 are distributed to the other two stores in these amounts: 5, 5
- The 10 products of type 2 are distributed to the last two stores in these amounts: 5, 5 <br>
The maximum number of products given to any store is max(5, 5, 5, 5, 5, 5, 5) = 5 <br>

<b>Example 3:</b> <br>
<b>Input:</b> n = 1, quantities = [10000] <br>
<b>Output:</b> 10000 <br>
<b>Explanation:</b> the only one optimal way is:
- The 10000 products of type 0 are distributed to the only store. <br>
The maximum number of products given to any store is max(10000) = 10000<br><br>


<b>Constraints</b>
<ul><li> m ==quantities.length</li>
<li> 1 <=m <= n <= 10 <sup>5</sup></li>
<li>1 <= quantities[i] <= 10<sup>5</sup></li></ul>

------------------------------------------------------------------

2075. Decode the slanted Ciphertext (Medium) <br><br>

A string originalText is encoded using a <b>slanted transposition cipher</b> to a string encodedText with the hep of a matrix having a <b>fixed number of rows</b> rows <br>
 
originalText is placed first in a top-left to bottom-right manner. <br> 

The bluecells are filled first, followed by the red cells, then the yellow cells, and so on, until we reached the end of originalText. The arrow indicates the order in which the cells are filled. All empty cells are filled with ' '. The number of columns is chosen such that the rightmost column will not be empty after filling in originalText. 

encodedText is then formed by appending all characters of the matrix in row-wise fashion. 
The characters in the blue cells are appended first to encodedText, then the red cells, and so on, and finnaly yellow cells. The arrow indicates the order in which the cells are accessed. 

For example, if originalText = "cipher" and rows = 3, then the encodedText = "ch   ie   pr"

Given the encoded string encodedText and number of rows rows, return the original string originalText.

Note: originalText <b>does not</b> have any trailing spaces ' ' . The test cases are generated such that there is only one possible originalText

<b>Example 1:</b> <br>
<b>Input:</b> encodedText = "ch   ie   pr", rows =3 <br>
<b>Output:</b> "cipher" <br>


<b>Example 2:</b> <br>
<b>Input:</b> encodedText = "iveo    eed   l te   olc", rows =4 <br>
<b>Output:</b> "i love leetcode" <br>


<b>Example 3:</b> <br>
<b>Input:</b> encodedText = "coding", rows =1 <br>
<b>Output:</b> "coding" <br>

<b>Constraints: </b><br>
<ul><li> 0 <= encodedText.length <= 10<sup>6</sup> </li>
  <li> encodedText consists of lowercase English letters and ' ' only.</li>
  <li>encodedText is a valid encoding of some originalText that <b>does not</b> have trailing spaces.</li>
  <li> 1 <= rows <= 1000</li>
  <li> The testcases are generated such that there is <b>only one possible originalText </li></ul>

--------------------------------------------------------------------

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

2150. Find All Lonely Numbers in the Array (Medium) <br><br>

You are given an integer array nums. A number x is <b>lonely</b> when it appears only once, and no <b>adjacent</b> numbers (i.e. x+1 and x-1) appear in the array.
Return all lonely numbers in nums. You may return the answer in <b>any order</b>.<br>

<b>Example 1:</b><br>
<b>Input:</b> nums = [10, 6, 5, 8]
<b>Output:</b> [10, 8]<br>
<b>Explanation:</b><br>
- 10 is a lonely number since it appears exactly once and 9 and 11 do not appear in nums.<br>
- 8 is a lonely number since it appears exactly once and 9 and 7 do not appear in nums.<br>
- 5 is not a lonely number since 6 appears in nums and vice versa.<br>
Hence, the lonely numbers in nums are [10, 8]<br>

<b>Example 2:</b><br>
<b>Input:</b> nums = [1, 3, 5, 3]<br>
<b>Output:</b> [1, 5]<br>
<b>Explanation:</b><br>
- 1 is a lonely number since it appears exactly once and 0 and 2 do not appear in nums.<br>
- 5 is a lonely number since it appears exactly once and 4 and 6 do not appear in nums.<br>
- 3 is not a lonely number since it appears twice<br>
Hence, the lonely numbers in nums are [1, 5]<br>

<b>Constraints:</b><br>
<ul><li> 1<= nums.length <=10<sup>5</sup></li>
  <li> 0 <= nums[i] <= 10<sup>6</sup></li></ul>
  
------------------------------------------------------------------------

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

2186. Minimum Number of Steps to Make Two Strings Anagram II (Medium)<br><br>

You are given two strings s and t. In one step, you can append <b>any character</b> to either s or t.<br>

Return the minimum number of steps to make s and t <b>anagrams</b> of eachother.<br>

An anagram of a string is a string that contains the sma e characters with a different (or the same) ordering. <br>

<b>Example 1:</b><br>
<b>Input:</b> s= "leetcode", t = "coats"<br>
<b>Output: 7</b><br>
<b>Explanation:</b><br>
- In 2 steps, we can append the letters in "as" onto s = "leetcode", forming s = "leetcodeas".<br>
- In 5 steps, we can append the letters in "leede" onto t = "coats", forming t = "coatsleede".<br>
"leetcodeas" and "coatsleede" are now anagrams of eachother.<br>
we used a total of 2+7 = 7 steps. It can be shown that there is no way to make them anagrams of eachother wih less than 7 steps. <br>

<b>Example 2:</b><br>
<b>Input:</b> s= "night", t = "thing" <br>
<b>Output:</b> 0<br>
<b>Explanation:</b> The given strings are already anagrams of eachother. Thus, we do not need any further steps.

<b>Constraints:</b><br>
<ul><li> 1 <= s.length, t.length <=2*10<sup>5</sup>
  <li> s and t consist of lowercase English letters.</li></ul>
  
----------------------------------------------------------------------------

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

2226. Maximum Candies Allocated to K Children (Medium) <br><br>

You are given a <b>0-indexed</b> integer array candies. Each element in the array denotes a pile of candies of size candies[i]. You can divide each pile into any number of <b>sub piles</b>, but you <b>cannot</b> merge two piles together. <br>
  
You are also given an integer K. You should allocate piles of candies to k children such that each child gets the <b>same</b> number of candies. Each child can take <b>at most one pile</b> of candies and some piles of candies may go unused. <br>

Return the <b>maximum number of candies</b> each child can get. <br>

<b>Example 1:</b><br>
<b>Input: </b> candies: [5, 8, 6], k = 3 <br>
<b>Output:</b> 5 <br>
<b>Explanation:</b> We can divide candies[1] into 2 piles of size 5 and 3, and candies[2] into 2 piles of size 5 and 1. We now have five piles of candies of sizes 5, 5, 3, 5, and 1. We can allocate the the 3 piles of size 5 to 3 children. It can be proven that each child cannot receive more than 5 candies. <br>

<b>Example 2:</b><br>
<b>Input: </b> candies: [2, 5], k = 11 <br>
<b>Output:</b> 0 <br>
<b>Explanation:</b> There are 11 children but only 7 candies in total, so it is impossible to ensure each child receives at least one candy. Thus, each child gets no candy and the answer is 0. <br>

<b>Constraints: </b><br>
<ul><li> 1 <= candies.length <= 10<sup>5</sup></li>
  <li> 1 <= candies[i] <= 10<sup>7</sup></li>
  <li> 1 <= k <= 10<sup>12</sup></li></ul>
  
-----------------------------------------------------------------

2233. Maximum Product After K Increments (Medium) <br><br>

You are given an array of non-negative integers nums and an integer k. In one operation, you may choose <b>any</b> element from nums and increment it by 1
Return the maximum product of nums after at most k operations. Since the answe may be very large return ir modulo 10<sup>9</sup> + 7

<b>Example 1:</b><br>
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

2240. Number of Ways to Buy Pens and Pencils (Medium) <br><br>

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

2244. Minimum Rounds to Complete All tasks <br><br>

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

2249. Count Lattice Points inside a Circle (Medium) <br><br>

Given a 2D integer array circles where circles[i] = [x<sub>i</sub>, y<sub>i</sub>, r<sub>i</sub>] represents the center (x<sub>i</sub>, y<sub>i</sub>) and radius r<sub>i</sub> of the i<sup>th</sup> circle drawn on a grid, return the <b>number of lattice points</b> that are present inside <b>at least one circle</b>

Note:
<ul><li>A <b>lattice point</b> is a point with integer coordinates</li>
  <li> Points that lie <b>on the circumference of a circle</b> are also considered to be inside it</li>
  </ul>
  
<b>Example 1:</b> <br>
<b>Input:</b> circles = [[2, 2, 1]] <br>
<b>Output:</b> 5 <br>
<b>Explanation:</b> The lattice points present inside the circle are (1, 2), (2, 1), (2, 2), (2, 3) and (3, 2). 
Other points such as (1, 1) and (1, 3) are not considered inside the circle. Hence, the number of lattice points present inside at least one circle is 5 <br>

<b>Example 2:</b> <br>
<b>Input:</b> circles = [[2, 2, 2], [3, 4, 1]] <br>
<b>Output:</b> 16 <br>
<b>Explanation:</b> There are 16 lattice points present inside at least one circle. Some of them are (0, 2), (2, 0), (2, 4), (3, 2) and (4, 4). <br>

<b>Constraints: </b><br>
<ul><li> 1 <= circles.length <= 200 </li>
  <li> circles[i].length == 3 </li>
  <li> 1 <= r<sub>i</sub> <= min(x<sub>i</sub>, y<sub>i</sub>) </li></ul>

------------------------------------------------------------------

2289. Steps to Make Array Non-decreasing (Medium) <br><br>
You are given a 0-indexed integer array nums. In one step, remove all elements nums[i] where nums[i-1] > nums[i] for all 0<i<nums.length <br>

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

2300. Successful Pairs of Spells and Potions (Medium) <br><br>

You are given two positive integer arrays spells and potions of length n and m respectively, where spells[i] represents the strength of the i<sup>th</sup> spell and potions[j] represents the strength of the j<sup>th</sup> potion. <br>

You are also given an integer success. A spell and potion pair is considered <b>successful</b> if the <b>product</b> of their strengths is at least success. <br>

Return an integer array pairs of length n where pairs[i] is the number of <b>potions</b> that will form a successful pair with the i<sup>th</sup> spell. <br>

<b>Example 1:</b><br> 
<b>Input:</b> spells = [5, 1, 3], potions = [1, 2, 3, 4, 5], success = 7<br>
<b>Output:</b> [4, 0, 3] <br>
<b>Explanation:</b> 0<sup>th</sup> spell: 5 * [1, 2, 3, 4, 5] = [5, <b>10</b>, <b>15</b>, <b>20</b>, <b>25</b>]. 4 pairs are successful. <br>
1<sup>st</sup> spell: 1 * [1, 2, 3, 4, 5] = [1, 2, 3, 4, 5]. 0 pairs are successful. <br>
2<sup>nd</sup> spell: 3 * [1, 2, 3, 4, 5] = [3, 6, <b>9</b>, <b>12</b>, <b>15</b>]. 3 pairs are successful. <br>
Thus [4, 0, 3] is returned.<br>

<b>Example 2:</b><br>
<b>Input:</b> spells = [3, 1, 2], potions = [8, 5, 8], success = 16 <br>
<b>Output:</b> [2, 0, 2] <br>
Explanation: 0<sup>th</sup> spell: 3 * [8, 5, 8] = [<b>24</b>, 15, <b>24</b>]. 2 pairs are successful. <br>
1<sup>st</sup> spell: 1 * [8, 5, 8] = [8, 5, 8]. 0 pairs are successful. <br>
2<sup>nd</sup> spell: 2 * [8, 5, 8] = [<br>16</br>, 10, <br>16</br>]. 2 pairs are successful. <br>
Thus [2, 0, 2] is returned. <br>

<b>Constraints:</b>

<ul><li>n == spells.length </li>
<li>m == potions.length </li>
<li>1 <= n, m <= 10<sup>5</sup> </li>
<li>1 <= spells[i], potions[i] <= 10<sup>5</sup> </li>
<li>1 <= success <= 10<sup>10</sup> </li></ul>

-------------------------------------------------------------------------------

2320. Count Number of Ways to Place Houses (Medium) <br><br>

There is a street with n*2 <b>plots</b> where there are n plots on each side of the street. The plots on each side are numbered from 1 to n. On each plot, a house can be placed. <br>

Return the number of ways houses can be placed such that no two houses are adjacent to eachother, on the same side of the street. Since the answer may be very large, return it <b>modulo</b> 10<sup>9</sup>+7. <br>

Note that if a house is placed on the i<sup>th</sup> plot on one side of the street, a house can also be placed on the i<sup>th</sup> plot on the other side of the street.<br>

<b>Example 1:</b> <br>
<b>Input:</b> n = 1 <br>
<b>Output:</b> 4 <br>
<b>Explanation:</b><br>
Possible arrangements:<br>
1. All plots are empty<br>
2. A house is placed on one side of the street.<br> 
3. A house is placed on the other side of the street.<br>
4. Two houses are placed, one on each side of the street. <br>

<b>Example 2:</b> <br>
<b>Input:</b> n = 2 <br>
<b>Output:</b> 9 <br>
<b>Explanation:</b> The 9 possible arrangements are shown in the diagram above<br>

<b>Constraints:</b>

<ul><li> 1<= n<= 10<sup>4</sup></li></ul>

-------------------------------------------------------------------------------------------------

2322. The Latest Time to Catch a Bus (Medium) <br><br>

You are given a <b>0-indexed</b> integer array buses of length n, where buses[i] represents the departure time of the i<sup>th</sup> bus. You are also given a <b>0-indexed</b> integer array passengers of length m, where passengers[j] represents the arrival time of the j<sup>th</sup> passenger. All bus departure times are unique. All passenger arrival times are unique. <br>

Ypu are given an integer capacity, which represents the <b>maximum</b> number of passengers that can get on each bus. <br>

The passengers will get on the next available bus. You can get on a bus that will depart at x minutes if you arrive at y minues, where y<=x, and the bus is not full. Passengers with the <b>earliest arrival times get on the bus first. <br>

Return the latest time you may arrive at the bus station to catch a bus. You <b>cannot</b> arrive at the same time as another passenger.<br>

<b>Note:</b> The arrays buses and passengers are not necessarily sorted.<br>

<b>Example 1:</b> <br>
<b>Input:</b> buses = [10, 20], passengers = [2, 17, 18, 19], capacity = 2 <br>
<b>Output:</b> 16 <br>
<b>Explanation:</b> The 1<sup>st</sup> bus departs with the 1<sup>st</sup> passenger. <br>
The 2<sup>nd</sup> bus departs with you and the 2<sup>nd</sup> passenger. <br>


<b>Example 2:</b> <br>
<b>Input:</b> buses = [20, 30, 10], passengers = [19, 13, 26, 4, 25, 11, 21], capacity = 2 <br>
<b>Output:</b> 20 <br>
<b>Explanation:</b> The 1<sup>st</sup> bus departs with the 4<sup>th</sup> passenger. <br>
The 2<sup>nd</sup> bus departs with the 6<sup>th</sup> and 2<sup>nd</sup> passengers. <br>
The 3<sup>rd</sup> bus departs with the 1<sup>st</sup> passenger and you. <br>

<b>Constraints:</b><br>
<ul><li>n == buses.length </li>
<li>m == passengers.length </li>
<li>1 <= n, m, capacity <= 10<sup>5</sup></li>
<li> 2 <= buses[i], passengers[i] <= 10 <sup>9</sup></li>
<li> Each element in buses is <b>unique</b>.</li>
<li> Each element in passengers is <b>unique</b>.</li></ul>

-------------------------------------------------------------------------------------------

2333. Minimum Sum of Squared Difference (Medium) <br><br>

You are given two positive <b>0-indexed</b> integer arrays nums1 and nums2, both of length n.

The <b>sum of squared difference</b> of arrays nums1 and nums2 is defined as the <b>sum</b> of (nums1[i]-nums2[i])<sup>2</sup> for each 0 <= i < n. 

You are also given two positive integers k1 and k2. You can modify any of the elements of nums1 by +1 or -1 at most k1 times. similarly, you can modify any of the elements of nums2 by +1 or -1 at most k2 times. 

Return the minimum <b>sum of squared difference</b> after modifying array nums1 at most k1 times and modifying array nums2 at most k2 times.

<b>Note:</b> You are allowed to modify the array elements to become <b>negative</b> integers.

<b>Example 1:</b><br>
<b>Input:</b> nums1 = [1, 2, 3, 4], nums2 = [2, 10, 20, 19], k1 = 0, k2 = 0 <br>
<b>Output:</b> 579 <br>
<b>Explanation:</b> The elements in nums1 and nums2 cannot be modified because k1= 0 and k2 = 0 <br>
The sum of square difference will be (1 - 2)<sup>2</sup>+(2 - 10)<sup>2</sup>+(3 - 20)<sup>2</sup>+(4 - 19)<sup>2</sup> = 579<br>

<b>Example 2:</b><br>
<b>Input:</b> nums1 = [1, 4, 10, 12], nums2 = [5, 8, 6, 9], k1 = 1, k2 = 1 <br>
<b>Output:</b> 43 <br>
<b>Explanation:</b> One way to obtain the minimum sum of square difference is:<br>
-Increase nums1[0] once.<br>
-Increase nums2[2] once.<br>
The minimum of the sum of square difference will be (2 - 5)<sup>2</sup>+(4 - 8)<sup>2</sup>+(10 - 7)<sup>2</sup>+(12 - 9)<sup>2</sup> = 43<br>
Note that, there are other ways to obtain the minimum of the sum of square difference, but there is no way to obtain a sum smaller than 43.<br>

<b>Constraints:</b><br>
<ul><li> n == nums1.length == nums2.length</li>
<li> 1 <= n <= 10<sup>5</sup></li>
<li> 0 <= nums1[i], nums2[i] <= 10<sup>5</sup> </li>
<li> 0 <= k1, k2 <= 10<sup>9</sup> </li></ul>

----------------------------------------------------------------
