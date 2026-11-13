# [2882. Drop Duplicate Rows](https://leetcode.com/problems/drop-duplicate-rows/)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Topics](https://img.shields.io/badge/Topics-Uncategorized-informational)

## 📝 Problem Description

<pre>
DataFrame customers
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| customer_id | int    |
| name        | object |
| email       | object |
+-------------+--------+
</pre>

<p>There are some duplicate rows in the DataFrame based on the <code>email</code> column.</p>

<p>Write a solution to remove these duplicate rows and keep only the <strong>first</strong> occurrence.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<pre>
<strong class="example">Example 1:</strong>
<strong>Input:</strong>
+-------------+---------+---------------------+
| customer_id | name    | email               |
+-------------+---------+---------------------+
| 1           | Ella    | emily@example.com   |
| 2           | David   | michael@example.com |
| 3           | Zachary | sarah@example.com   |
| 4           | Alice   | john@example.com    |
| 5           | Finn    | john@example.com    |
| 6           | Violet  | alice@example.com   |
+-------------+---------+---------------------+
<strong>Output: </strong> 
+-------------+---------+---------------------+
| customer_id | name    | email               |
+-------------+---------+---------------------+
| 1           | Ella    | emily@example.com   |
| 2           | David   | michael@example.com |
| 3           | Zachary | sarah@example.com   |
| 4           | Alice   | john@example.com    |
| 6           | Violet  | alice@example.com   |
+-------------+---------+---------------------+
<strong>Explanation:</strong>
Alic (customer_id = 4) and Finn (customer_id = 5) both use john@example.com, so only the first occurrence of this email is retained.
</pre>


---

## 📊 Submission Details

- **Submitted On:** 3/3/2026, 3:33:35 AM
- **Language:** `Uncategorized`
- **Runtime:** 250 ms 
- **Memory:** 66.8 MB 

---
*Automatically pushed using **[LeetCode GitHub Auto-Sync](https://github.com)**.*
