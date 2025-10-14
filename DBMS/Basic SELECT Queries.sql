SELECT * FROM Student;
SELECT * FROM Student WHERE Course = 'MCA';
SELECT Student_name FROM Student WHERE StudentId IN (7369, 7777, 2233);
SELECT Student_name FROM Student WHERE Student_name LIKE 'S%';
SELECT Student_name FROM Student WHERE Student_name LIKE '%s';
SELECT Student_name FROM Student WHERE Student_name LIKE '_k%';
