USE coding;

SELECT count(member.id) AS 'Number of members', FLOOR(AVG(DATEDIFF(CAST(NOW() AS Date), birthdate)/365)) AS 'Average age' from member inner join profiles on member.profile_id = profiles.id;
