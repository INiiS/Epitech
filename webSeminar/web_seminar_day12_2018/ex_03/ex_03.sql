USE coding;

SELECT floor AS "Floor number", sum(seats) AS "Total number of seats", count(id) AS "Total number of rooms"
FROM rooms
GROUP BY floor
ORDER BY sum(seats)
ASC;
