# [921. Minimum Add to Make Parentheses Valid](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange)
![Topics](https://img.shields.io/badge/Topics-String-informational)

## 📝 Problem Description

<p>A parentheses string is valid if and only if:</p>

<ul>
	<li>It is the empty string,</li>
	<li>It can be written as <code>AB</code> (<code>A</code> concatenated with <code>B</code>), where <code>A</code> and <code>B</code> are valid strings, or</li>
	<li>It can be written as <code>(A)</code>, where <code>A</code> is a valid string.</li>
</ul>

<p>You are given a parentheses string <code>s</code>. In one move, you can insert a parenthesis at any position of the string.</p>

<ul>
	<li>For example, if <code>s = &quot;()))&quot;</code>, you can insert an opening parenthesis to be <code>&quot;(<strong>(</strong>)))&quot;</code> or a closing parenthesis to be <code>&quot;())<strong>)</strong>)&quot;</code>.</li>
</ul>

<p>Return <em>the minimum number of moves required to make </em><code>s</code><em> valid</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;())&quot;
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(((&quot;
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s[i]</code> is either <code>&#39;(&#39;</code> or <code>&#39;)&#39;</code>.</li>
</ul>


---

## 📊 Submission Details

- **Submitted On:** 10/6/2026, 9:43:21 AM
- **Language:** `String`, `Stack`, `Greedy`, `Bracket Sequences`
- **Runtime:** 0 ms 
- **Memory:** 8.6 MB 

---
*Automatically pushed using **[LeetCode GitHub Auto-Sync](https://github.com)**.*
