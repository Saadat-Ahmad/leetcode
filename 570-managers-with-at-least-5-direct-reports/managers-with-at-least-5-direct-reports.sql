-- Write your PostgreSQL query statement below
SELECT e.name 
FROM Employee e
WHERE  (SELECT COUNT(*) 
    FROM Employee ee WHERE ee.managerId = e.id) >= 5;