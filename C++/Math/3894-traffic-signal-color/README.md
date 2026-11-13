# [3894. Traffic Signal Color](https://leetcode.com/problems/traffic-signal-color/)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Topics](https://img.shields.io/badge/Topics-Math-informational)

## 📝 Problem Description

<p>You are given an integer <code>timer</code> representing the remaining time (in seconds) on a traffic signal.</p>

<p>The signal follows these rules:</p>

<ul>
	<li>If <code>timer == 0</code>, the signal is <code>&quot;Green&quot;</code></li>
	<li>If <code>timer == 30</code>, the signal is <code>&quot;Orange&quot;</code></li>
	<li>If <code>30 &lt; timer &lt;= 90</code>, the signal is <code>&quot;Red&quot;</code></li>
</ul>

<p>Return the current state of the signal. If none of the above conditions are met, return <code>&quot;Invalid&quot;</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">timer = 60</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;Red&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>Since <code>timer = 60</code>, and <code>30 &lt; timer &lt;= 90</code>, the answer is <code>&quot;Red&quot;</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">timer = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;Invalid&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>Since <code>timer = 5</code>, it does not satisfy any of the given conditions, the answer is <code>&quot;Invalid&quot;</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= timer &lt;= 1000</code></li>
</ul>


---

## 📊 Submission Details

- **Submitted On:** 4/11/2026, 8:09:34 PM
- **Language:** `Math`, `String`, `Simulation`
- **Runtime:** 0 ms 
- **Memory:** 7.9 MB 

---
*Automatically pushed using **[LeetCode GitHub Auto-Sync](https://github.com)**.*
