-- 코드를 입력하세요
SELECT animal_type, count(*) from animal_ins group by animal_type order by (case when animal_type="Cat" then 0 else 1 end)