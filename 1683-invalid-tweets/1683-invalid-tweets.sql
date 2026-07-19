# Write your MySQL query statement below
SELECT tweet_id 
FROM TWEETS
WHERE length(content)>15;