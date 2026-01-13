-- 코드를 작성해주세요
with recursive tmp as (
    select ID, PARENT_ID, 1 as gen from ECOLI_DATA
    where PARENT_ID is null
    union all
    SELECT s.ID, s.PARENT_ID, tmp.gen+1
    from tmp join ECOLI_DATA s on tmp.id=s.parent_id)

select count(*) COUNT, gen GENERATION from tmp where ID not in (select distinct PARENT_ID from tmp where PARENT_ID is not null) group by GENERATION order by GENERATION;