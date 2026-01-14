-- 코드를 입력하세요
SELECT year(sales_date) year, month(sales_date) month, count(distinct u.user_id) purchased_users, round(count(distinct u.user_id)/(select count(*) from user_info where year(joined)=2021),1) puchased_ratio from user_info u join online_sale o on u.user_id=o.user_id where year(joined)=2021 
group by year, month 
order by year, month