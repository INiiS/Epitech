USE coding;

select *  INTO outfile '/tmp/movies.csv' FIELDS TERMINATED BY ',' FROM movies;

