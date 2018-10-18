USE coding;

SELECT count(title) AS "Number of movies that starts with 'eX'"
FROM movies
WHERE TITLE LIKE BINARY 'eX%';
