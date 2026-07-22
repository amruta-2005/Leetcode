# Write your MySQL query statement below
SELECT q1.person_name 
FROM Queue q1
INNER JOIN Queue q2
ON q1.turn>=q2.turn 
GROUP BY q1.turn 
HAVING  sum(q2.weight)<=1000
ORDER BY sum(q2.weight) DESC 
LIMIT 1;