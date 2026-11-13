impl Solution {
    pub fn diagonal_prime(nums: Vec<Vec<i32>>) -> i32 {
        nums.iter()
            .enumerate()
            .flat_map(|(i, r)| [r[i], r[nums.len() - 1 - i]])
            .filter(|&val| {
                val == 2
                || val > 1
                && val & 1 == 1
                && (3..=f64::from(val).sqrt() as i32)
                    .step_by(2)
                    .all(|d| val % d > 0)
            })
            .max()
            .unwrap_or_default()
    }
}