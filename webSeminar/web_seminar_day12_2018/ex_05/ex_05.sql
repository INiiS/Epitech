USE coding;

SELECT REPLACE(email,'machin.com','cap-gemini.fr') AS 'New email addresses' 
FROM profiles 
INNER JOIN member ON profiles.id = member.profile_id 
ORDER BY email DESC;

