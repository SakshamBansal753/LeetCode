# [2881. Create a New Column](https://leetcode.com/problems/create-a-new-column/)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Topics](https://img.shields.io/badge/Topics-Uncategorized-informational)

## 📝 Problem Description

<pre>
DataFrame <code>employees</code>
+-------------+--------+
| Column Name | Type.  |
+-------------+--------+
| name        | object |
| salary      | int.   |
+-------------+--------+
</pre>

<p>A&nbsp;company plans to provide its employees with a bonus.</p>

<p>Write a solution to create a new column name <code>bonus</code> that contains the <strong>doubled values</strong> of the <code>salary</code> column.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
DataFrame employees
+---------+--------+
| name    | salary |
+---------+--------+
| Piper   | 4548   |
| Grace   | 28150  |
| Georgia | 1103   |
| Willow  | 6593   |
| Finn    | 74576  |
| Thomas  | 24433  |
+---------+--------+
<strong>Output:</strong>
+---------+--------+--------+
| name    | salary | bonus  |
+---------+--------+--------+
| Piper   | 4548   | 9096   |
| Grace   | 28150  | 56300  |
| Georgia | 1103   | 2206   |
| Willow  | 6593   | 13186  |
| Finn    | 74576  | 149152 |
| Thomas  | 24433  | 48866  |
+---------+--------+--------+
<strong>Explanation:</strong> 
A new column bonus is created by doubling the value in the column salary.</pre>


---

## 📊 Submission Details

- **Submitted On:** 3/3/2026, 3:33:11 AM
- **Language:** `Uncategorized`
- **Runtime:** 265 ms 
- **Memory:** 66.5 MB 

---
*Automatically pushed using **[LeetCode GitHub Auto-Sync](https://github.com)**.*
