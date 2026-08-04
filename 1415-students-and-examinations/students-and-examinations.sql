-- Write your PostgreSQL query statement below
SELECT s.student_id, 
s.student_name,
sub.subject_name,
COUNT(e.student_id) AS attended_exams
FROM Students s
CROSS JOIN Subjects sub
LEFT JOIN
Examinations e 
ON e.subject_name = sub.subject_name 
AND e.student_id = s.student_id
GROUP BY s.student_name, sub.subject_name, e.student_id, s.student_id
ORDER BY s.student_id, sub.subject_name;