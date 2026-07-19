# Write your MySQL query statement below
SELECT name,bonus
FROM Employee LEFT JOIN Bonus
using(empId) WHERE bonus<1000 or bonus IS NULL;