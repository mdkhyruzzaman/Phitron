import mysql.connector

mydbconnection = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="password"
)

print("Connected successfully: ", mydbconnection)

db_name = "python_test_db"
cursor = mydbconnection.cursor()

sqlquery = f"CREATE DATABASE IF NOT EXISTS {db_name}"
cursor.execute(sqlquery)