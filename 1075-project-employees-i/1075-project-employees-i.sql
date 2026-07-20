# Write your MySQL query statement below
SELECT p.project_id, 
round(avg(e.experience_years),2)as average_years 
FROM Project P
JOIN Employee e
ON p.employee_id=e.employee_id 
GROUP BY p.project_id;