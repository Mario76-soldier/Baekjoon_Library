-- 코드를 작성해주세요
select count(*) FISH_COUNT, max(LENGTH) MAX_LENGTH, FISH_TYPE from FISH_INFO group by FISH_TYPE having avg(case when LENGTH>=10 then LENGTH else 10 end)>=33 order by FISH_TYPE asc