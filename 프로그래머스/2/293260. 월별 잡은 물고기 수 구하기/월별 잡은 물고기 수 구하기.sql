-- 코드를 작성해주세요
select count(*) as fish_count, month(time) as month from fish_info group by month having fish_count>0 order by month