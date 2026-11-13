# [2883. Drop Missing Data](https://leetcode.com/problems/drop-missing-data/)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Topics](https://img.shields.io/badge/Topics-Uncategorized-informational)

## 📝 Problem Description

<pre>
DataFrame students
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| student_id  | int    |
| name        | object |
| age         | int    |
+-------------+--------+
</pre>

<p>There are some rows having missing values in the <code>name</code> column.</p>

<p>Write a solution to remove the rows with missing values.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>+------------+---------+-----+
| student_id | name    | age |
+------------+---------+-----+
| 32         | Piper   | 5   |
| 217        | None    | 19  |
| 779        | Georgia | 20  |
| 849        | Willow  | 14  |
+------------+---------+-----+
<strong>Output:
</strong>+------------+---------+-----+
| student_id | name    | age |
+------------+---------+-----+
| 32         | Piper   | 5   |
| 779        | Georgia | 20  | 
| 849        | Willow  | 14  | 
+------------+---------+-----+
<strong>Explanation:</strong> 
Student with id 217 havs empty value in the name column, so it will be removed.</pre>


---

## 📊 Submission Details

- **Submitted On:** 3/3/2026, 3:34:32 AM
- **Language:** `Uncategorized`
- **Runtime:** 269 ms 
- **Memory:** 66.8 MB 

---
*Automatically pushed using **[LeetCode GitHub Auto-Sync](https://github.com)**.*
