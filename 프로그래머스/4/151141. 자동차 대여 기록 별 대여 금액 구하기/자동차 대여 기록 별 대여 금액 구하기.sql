-- 코드를 입력하세요
SELECT r.history_id, round(0.01*(datediff(r.end_date, r.start_date)+1)*c.daily_fee*(100-ifnull(d.discount_rate,0))) fee
from car_rental_company_rental_history r join car_rental_company_car c on r.car_id=c.car_id 
left join car_rental_company_discount_plan d
    on c.car_type = d.car_type
    and d.duration_type = (case
                                when datediff(r.end_date, r.start_date)+1>= '90' then '90일 이상'
                                when datediff(r.end_date, r.start_date)+1>= '30' then '30일 이상'
                                when datediff(r.end_date, r.start_date)+1>= '7' then '7일 이상'
                                else null
                            end)
                           where c.car_type="트럭" order by fee desc, history_id desc