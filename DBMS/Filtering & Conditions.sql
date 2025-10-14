SELECT Student_name FROM Student 
WHERE StudentId NOT IN (
    SELECT StudentId FROM Course WHERE DeptNo IN (10, 40)
);

SELECT Student_name FROM Student WHERE Course IS NULL;

SELECT * FROM ORDERS WHERE Amount BETWEEN 21000 AND 30000;