-- Write your PostgreSQL query statement below
SELECT customer_id, COUNT(*) as count_no_trans 
FROM Visits LEFT JOIN  Transactions 
USING (visit_id) 
WHERE transaction_id IS null
GROUP BY customer_id;