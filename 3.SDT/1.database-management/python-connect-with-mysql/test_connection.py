import mysql.connector

db_config = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="password"
)
print("Connected successfully: ", db_config)