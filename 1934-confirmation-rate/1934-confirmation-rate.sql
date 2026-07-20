# Write your MySQL query statement below
SELECT s.user_id , round(avg(if(c.action="confirmed",1,0)),2) as confirmation_rate 
FROM Signups s LEFT JOIN
Confirmations c using(user_id) 
group by s.user_id;