USE coding;

DELETE FROM movies WHERE DATE_FORMAT(release_date, "%Y") = 1990;
