# Write your MySQL query statement below
(select u.name as results
from movierating mr
join users u
on mr.user_id = u.user_id
group by mr.user_id, u.name
order by count(*) desc, u.name
limit 1)
union all
(select m.title as results
from movierating mr
join movies m
on mr.movie_id = m.movie_id
where date_format(created_at, '%Y-%m') = '2020-02'
group by mr.movie_id, m.title
order by avg(rating) desc, m.title
limit 1
);