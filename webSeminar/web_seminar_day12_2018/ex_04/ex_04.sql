USE coding;

SELECT LEFT(summary, 92) AS "Summaries" 
FROM movies 
WHERE id % 2 = 1 AND id BETWEEN '42' AND '84';

