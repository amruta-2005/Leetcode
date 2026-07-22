# Write your MySQL query statement below
SELECT p.product_name ,
sum(unit) as unit 
FROM Products p JOIN 
Orders o
using(product_id)
WHERE o.order_date BETWEEN '2020-02-01' AND '2020-02-29' 
GROUP BY o.product_id
HAVING sum(unit)>=100;