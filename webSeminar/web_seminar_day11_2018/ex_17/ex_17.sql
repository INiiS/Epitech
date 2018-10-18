USE coding;

SELECT title AS 'Title of the longest movie' 
FROM movies
WHERE min_duration = (SELECT MAX(min_duration) FROM movies);
