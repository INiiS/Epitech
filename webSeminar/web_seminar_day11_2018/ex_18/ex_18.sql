USE coding;


SELECT CONCAT(CONCAT(UPPER(LEFT(firstname, 1)), LOWER(SUBSTRING(firstname, 2, LENGTH(firstname)))), "-", CONCAT(UPPER(LEFT(lastname, 1)), LOWER(SUBSTRING(lastname, 2, LENGTH(lastname))))) AS 'Full name'
FROM profiles
order by birthdate desc;

