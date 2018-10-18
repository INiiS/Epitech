USE coding;

SELECT title AS "Movie title", datediff(NOW(), release_date) AS "Number of days passed" 
FROM movies 
GROUP BY title,release_date 
HAVING release_date > 0;

