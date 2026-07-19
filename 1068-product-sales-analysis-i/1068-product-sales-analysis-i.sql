# Write your MySQL query statement below
SELECT product_name,year,price 
FROM Sales INNER JOIN Product 
using(product_id);