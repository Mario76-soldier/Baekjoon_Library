-- 코드를 작성해주세요
select count(fn.FISH_NAME) FISH_COUNT, fn.FISH_NAME  from FISH_INFO fi join FISH_NAME_INFO fn on fi.FISH_TYPE=fn.FISH_TYPE group by FISH_NAME order by FISH_COUNT desc