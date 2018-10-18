USE coding;

UPDATE movies
SET producer_id = (SELECT producers.id from producers INNER JOIN movies ON producers.id = movies.producer_id where name like '%film' GROUP BY name ORDER BY count(movies.id) asc LIMIT 1 )
WHERE producer_id IS NULL;
