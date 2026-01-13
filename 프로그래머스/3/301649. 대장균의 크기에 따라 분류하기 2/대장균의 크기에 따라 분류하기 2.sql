-- 코드를 작성해주세요
select a.ID, 
case when a.ranke<=0.25 then "CRITICAL" when a.ranke<=0.50 then "HIGH" when a.ranke<=0.75 then "MEDIUM" else "LOW" end as COLONY_NAME from (select ID, percent_rank() over (order by SIZE_OF_COLONY desc) as ranke from ECOLI_DATA) as a order by a.ID
