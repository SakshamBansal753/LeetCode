# [3222. Find the Winning Player in Coin Game](https://leetcode.com/problems/find-the-winning-player-in-coin-game/)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Topics](https://img.shields.io/badge/Topics-Math-informational)

## 📝 Problem Description

<p>You are given two <strong>positive</strong> integers <code>x</code> and <code>y</code>, denoting the number of coins with values 75 and 10 <em>respectively</em>.</p>

<p>Alice and Bob are playing a game. Each turn, starting with <strong>Alice</strong>, the player must pick up coins with a <strong>total</strong> value 115. If the player is unable to do so, they <strong>lose</strong> the game.</p>

<p>Return the <em>name</em> of the player who wins the game if both players play <strong>optimally</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">x = 2, y = 7</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;Alice&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>The game ends in a single turn:</p>

<ul>
	<li>Alice picks 1 coin with a value of 75 and 4 coins with a value of 10.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">x = 4, y = 11</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;Bob&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>The game ends in 2 turns:</p>

<ul>
	<li>Alice picks 1 coin with a value of 75 and 4 coins with a value of 10.</li>
	<li>Bob picks 1 coin with a value of 75 and 4 coins with a value of 10.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= x, y &lt;= 100</code></li>
</ul>


---

## 📊 Submission Details

- **Submitted On:** 8/15/2026, 10:56:31 PM
- **Language:** `Math`, `Simulation`, `Game Theory`
- **Runtime:** 0 ms 
- **Memory:** 7.8 MB 

---
*Automatically pushed using **[LeetCode GitHub Auto-Sync](https://github.com)**.*
