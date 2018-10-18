USE coding;

UPDATE subscriptions 
SET name = "Premium++" 
WHERE id = (SELECT max(id) FROM subscriptions);

