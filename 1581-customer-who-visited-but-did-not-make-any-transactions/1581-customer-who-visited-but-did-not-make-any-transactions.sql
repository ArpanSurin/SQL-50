/* Write your T-SQL query statement below */
/* Write your T-SQL query statement below */
SELECT v.customer_id AS customer_id , COUNT(v.customer_id) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE t.visit_id IS NULL
GROUP BY v.customer_id