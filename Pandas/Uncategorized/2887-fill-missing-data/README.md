# [2887. Fill Missing Data](https://leetcode.com/problems/fill-missing-data/)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Topics](https://img.shields.io/badge/Topics-Uncategorized-informational)

## 📝 Problem Description

<pre>
DataFrame <code>products</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| name        | object |
| quantity    | int    |
| price       | int    |
+-------------+--------+
</pre>

<p>Write a solution to fill in the missing value as <code><strong>0</strong></code> in the <code>quantity</code> column.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<pre>
<strong class="example">Example 1:</strong>
<strong>Input:</strong>+-----------------+----------+-------+
| name            | quantity | price |
+-----------------+----------+-------+
| Wristwatch      | None     | 135   |
| WirelessEarbuds | None     | 821   |
| GolfClubs       | 779      | 9319  |
| Printer         | 849      | 3051  |
+-----------------+----------+-------+
<strong>Output:
</strong>+-----------------+----------+-------+
| name            | quantity | price |
+-----------------+----------+-------+
| Wristwatch      | 0        | 135   |
| WirelessEarbuds | 0        | 821   |
| GolfClubs       | 779      | 9319  |
| Printer         | 849      | 3051  |
+-----------------+----------+-------+
<strong>Explanation:</strong> 
The quantity for Wristwatch and WirelessEarbuds are filled by 0.</pre>


---

## 📊 Submission Details

- **Submitted On:** 3/3/2026, 3:37:22 AM
- **Language:** `Uncategorized`
- **Runtime:** 236 ms 
- **Memory:** 66.3 MB 

---
*Automatically pushed using **[LeetCode GitHub Auto-Sync](https://github.com)**.*
