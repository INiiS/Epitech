USE coding;

SELECT title FROM movies
INNER JOIN genres ON movies.genre_id = genres.id
WHERE genres.name = "action" OR genres.name = "romance" 
