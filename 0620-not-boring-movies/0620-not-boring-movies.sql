# Write your MySQL query statement below
SELECT id,movie,description,rating 
FROM Cinema 
WHERE id mod 2=1 and description!="boring"
ORDER BY rating DESC;