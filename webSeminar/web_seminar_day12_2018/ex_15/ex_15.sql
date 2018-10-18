USE coding;

UPDATE profiles 
SET email = REPLACE(email, 'machin.com', 'cap-gemini.fr');

