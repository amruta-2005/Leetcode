# Write your MySQL query statement below
SELECT customer_id, count(visit_id) as count_no_trans
FROM Visits LEFT JOIN Transactions
using(visit_id) 
WHERE transaction_id IS NULL
GROUP BY customer_id;