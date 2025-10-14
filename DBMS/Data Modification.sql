-- UPDATE with calculation
UPDATE ORDERS SET Amount = Amount + 500;

-- Display with alias
SELECT Order_ID, Amount AS new_amount FROM ORDERS;