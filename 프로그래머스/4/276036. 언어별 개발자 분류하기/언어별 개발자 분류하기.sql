-- 코드를 작성해주세요
select case 
when SKILL_CODE & (select SUM(CODE) from SKILLCODES where CATEGORY="Front End") and SKILL_CODE & (select SUM(CODE) from SKILLCODES where NAME="Python") then "A"
when SKILL_CODE & (select SUM(CODE) from SKILLCODES where NAME="C#") then "B"
when SKILL_CODE & (select SUM(CODE) from SKILLCODES where CATEGORY="Front End") then "C"
end as GRADE, 
ID, EMAIL from DEVELOPERS where 
(SKILL_CODE & (select SUM(CODE) from SKILLCODES where CATEGORY="Front End") and SKILL_CODE & (select SUM(CODE) from SKILLCODES where NAME="Python")) or SKILL_CODE & (select SUM(CODE) from SKILLCODES where NAME="C#") or SKILL_CODE & (select SUM(CODE) from SKILLCODES where CATEGORY="Front End") order by GRADE, ID