USE coding;

LOAD DATA LOCAL INFILE '/tmp/jobs.csv' 
INTO TABLE jobs 
FIELDS TERMINATED BY ',' 
IGNORE 1 LINES;