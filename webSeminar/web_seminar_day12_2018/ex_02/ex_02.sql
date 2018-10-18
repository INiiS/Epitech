USE coding;

SELECT zipcode AS 'Zip codes'
FROM profiles
GROUP BY zipcode
HAVING count(id) > 1
ORDER BY zipcode ASC;
