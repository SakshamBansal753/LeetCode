# Write your MySQL query statement below
SELECT v.customer_id as customer_id,count(v.customer_id) as count_no_trans
FROM Visits as v
LEFT JOIN Transactions as t
ON v.visit_id=t.visit_id
where t.visit_id is NULL
GROUP BY v.customer_id 
ORDER BY count_no_trans DESC