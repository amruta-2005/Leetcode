# Write your MySQL query statement below
SELECT  customer_id
FROM Customer 
GROUP BY customer_id 
Having count(distinct product_key)=(

    SELECT count(product_key) FROM Product
)