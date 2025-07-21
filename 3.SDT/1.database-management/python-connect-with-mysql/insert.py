import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="password",
    database=db_name
)

cursor = mydbconnection.cursor()

sqlquery = f"insert into students (name, age) values ('John Doe', 20)"
cursor.execute(sqlquery)
cursor.execute("commit")
print("Table 'students' created successfully in database:", db_name)