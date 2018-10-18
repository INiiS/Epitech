USE coding;

SELECT name AS "Name of the most expensive subscription", price AS "Price" FROM subscriptions WHERE price = (SELECT MAX(price) FROM subscriptions);
