-- 코드를 작성해주세요
SELECT d.DEPT_ID, d.DEPT_NAME_EN, round(avg(e.SAL),0) AVG_SAL FROM HR_DEPARTMENT d join HR_EMPLOYEES e on d.DEPT_ID=e.DEPT_ID group by DEPT_ID order by AVG_SAL desc