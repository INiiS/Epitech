USE coding;

SELECT MONTHNAME(birthdate) AS "month of birth"
FROM member
ORDER BY profiles.id
LIMIT 43 OFFSET 41;
