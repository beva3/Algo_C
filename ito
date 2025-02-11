Absolutely! Let's walk through the commands together.

1. **Create the table `Client_Master`**
   ```sql
   CREATE TABLE Client_Master (
       CLIENTNO VARCHAR2(6),
       NAME VARCHAR2(20),
       ADDRESS VARCHAR2(50),
       CITY VARCHAR2(20),
       PINCODE INT,
       STATE VARCHAR2(20),
       BAL_DUE DECIMAL(10,2)
   );
   ```
   This command creates a table named `Client_Master` with specified columns and their data types.

2. **Insert data into the table**
   ```sql
   INSERT INTO Client_Master (CLIENTNO, NAME, ADDRESS, CITY, PINCODE, STATE, BAL_DUE)
   VALUES
   ('C0001', 'Rohan Joshi', 'Khapaitiya Chakla', 'Surat', 395003, 'Gujarat', 15000),
   ('C0002', 'Mamta Mazumdar', 'Salt Lake', 'Kolkata', 460012, 'West Bengal', 5000),
   ('C0003', 'Chhaya Bankar', 'Worli', 'Mumbai', 400054, 'Maharashtra', 2000),
   ('C0004', 'Ashwini Rathod', 'Ghangaur Ghat', 'Udaipur', 780011, 'Rajasthan', 7000),
   ('C0005', 'Ivan Bayross', 'Indiranagar', 'Bangalore', 560050, 'Karnataka', 1500),
   ('C0006', 'Deepak Sharma', 'Bandra', 'Mumbai', 400002, 'Maharashtra', 4300),
   ('C0007', 'Shymali Bhide', 'Juhu', 'Mumbai', 470912, 'Maharashtra', 2100);
   ```
   This command inserts multiple rows of data into the `Client_Master` table.

3. **List the details of the client according to the `BAL_DUE`**
   ```sql
   SELECT * FROM Client_Master ORDER BY BAL_DUE;
   ```
   This command retrieves all columns from the `Client_Master` table and sorts the rows by the `BAL_DUE` column.

4. **List all clients who are located in Mumbai**
   ```sql
   SELECT * FROM Client_Master WHERE CITY = 'Mumbai';
   ```
   This command retrieves all columns from the `Client_Master` table where the `CITY` column is 'Mumbai'.

5. **Show different types of states in `Client_Master` table by eliminating the repeated states**
   ```sql
   SELECT DISTINCT STATE FROM Client_Master;
   ```
   This command retrieves unique values from the `STATE` column in the `Client_Master` table.

6. **Change the city of client no `C0005` to Mangalore**
   ```sql
   UPDATE Client_Master SET CITY = 'Mangalore' WHERE CLIENTNO = 'C0005';
   ```
   This command updates the `CITY` column to 'Mangalore' for the row where the `CLIENTNO` is 'C0005'.

7. **Change the `BAL_DUE` of client no `C0001` to Rs. 1000**
   ```sql
   UPDATE Client_Master SET BAL_DUE = 1000 WHERE CLIENTNO = 'C0001';
   ```
   This command updates the `BAL_DUE` column to 1000 for the row where the `CLIENTNO` is 'C0001'.

8. **Delete from `Client_Master` where the state holds the value 'Rajasthan'**
   ```sql
   DELETE FROM Client_Master WHERE STATE = 'Rajasthan';
   ```
   This command deletes rows from the `Client_Master` table where the `STATE` column is 'Rajasthan'.

9. **Add a column name `Mobile` of data type `Number` & size `10`**
   ```sql
   ALTER TABLE Client_Master ADD Mobile NUMBER(10);
   ```
   This command adds a new column named `Mobile` with data type `NUMBER` and size 10 to the `Client_Master` table.

10. **Create a table `Balance_Details` having three fields (`ClientNo`, `Name`, `Bal_Due`) from the source table name `Client_Master` and rename the field `Bal_Due` to `Balance`**
    ```sql
    CREATE TABLE Balance_Details AS
    SELECT CLIENTNO, NAME, BAL_DUE AS Balance FROM Client_Master;
    ```
    This command creates a new table named `Balance_Details` with selected fields from the `Client_Master` table and renames `BAL_DUE` to `Balance`.

11. **Change the name of `Client_Master` table to `Customer`**
    ```sql
    ALTER TABLE Client_Master RENAME TO Customer;
    ```
    This command changes the name of the `Client_Master` table to `Customer`.

Let me know if you need more help with anything else!