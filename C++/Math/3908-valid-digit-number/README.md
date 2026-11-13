# [3908. Valid Digit Number](https://leetcode.com/problems/valid-digit-number/)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Topics](https://img.shields.io/badge/Topics-Math-informational)

## 📝 Problem Description

<p>You are given an integer <code>n</code> and a digit <code>x</code>.</p>

<p>A number is considered <strong>valid</strong> if:</p>

<ul>
	<li>It contains <strong>at least one</strong> occurrence of digit <code>x</code>, and</li>
	<li>It <strong>does not start</strong> with digit <code>x</code>.</li>
</ul>

<p>Return <code>true</code> if <code>n</code> is <strong>valid</strong>, otherwise return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 101, x = 0</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<p>The number contains digit 0 at index 1. It does not start with 0, so it satisfies both conditions. Thus, the answer is <code>true</code>​​​​​​​.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 232, x = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<p>The number starts with 2, which violates the condition. Thus, the answer is <code>false</code>.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 5, x = 1</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<p>The number does not contain digit 1. Thus, the answer is <code>false</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 10<sup>5</sup>​​​​​​​</code></li>
	<li><code>0 &lt;= x &lt;= 9</code></li>
</ul>


---

## 📊 Submission Details

- **Submitted On:** 4/26/2026, 12:28:08 AM
- **Language:** `Math`
- **Runtime:** 0 ms 
- **Memory:** 7.9 MB 

---
*Automatically pushed using **[LeetCode GitHub Auto-Sync](https://github.com)**.*
