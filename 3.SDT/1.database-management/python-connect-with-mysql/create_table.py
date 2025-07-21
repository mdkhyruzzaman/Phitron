import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="password",
    database=db_name
)

cursor = mydbconnection.cursor()

sqlquery = f"create table students (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255), age INT)"
cursor.execute(sqlquery)

print("Table 'students' created successfully in database:", db_name)