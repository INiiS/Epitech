USE coding;

SELECT title, min_duration 
FROM movies 
ORDER BY LENGTH(title) DESC, min_duration ASC;

