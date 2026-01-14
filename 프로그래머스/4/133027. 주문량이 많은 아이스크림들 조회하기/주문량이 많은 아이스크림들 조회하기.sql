-- 코드를 입력하세요
select a.flavor from (SELECT flavor, total_order from first_half
union all
select flavor, total_order from july) a group by a.flavor order by sum(a.total_order) desc limit 3