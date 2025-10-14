-- INNER JOIN
SELECT c.SID, c.First_Name, c.Last_Name, o.Amount
FROM CUSTOMER c
INNER JOIN ORDERS o ON c.SID = o.Customer_SID;

-- LEFT JOIN
SELECT * FROM s4 LEFT JOIN s5 ON s4.common_column = s5.common_column;

-- RIGHT JOIN
SELECT * FROM s4 RIGHT JOIN s5 ON s4.common_column = s5.common_column;

-- FULL OUTER JOIN
SELECT * FROM s4 FULL OUTER JOIN s5 ON s4.common_column = s5.common_column;

-- SELF JOIN (Employee-Manager)
SELECT e.First_Name AS Employee_Name, m.First_Name AS Manager_Name
FROM Employee e
LEFT JOIN Employee m ON e.Manager_ID = m.Emp_ID;