-- 코드를 입력하세요
SET @HOUR = -1;
SELECT (@HOUR := @HOUR+1) HOUR, (select count(distinct o.ANIMAL_ID) COUNT from ANIMAL_OUTS o where HOUR(o.DATETIME)=@HOUR) COUNT from ANIMAL_OUTS where @HOUR<23;