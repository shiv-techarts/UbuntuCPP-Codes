#include <iostream>
#include <mysql/mysql.h>
#include <stdio.h>

using namespace std;

#define SERVER "localhost"
#define USER "shiv"
#define PASSWORD "userdatabase"
#define DATABASE "jumbleGame"

int main() {
    MYSQL *connect;

    connect=mysql_init(NULL);

    if (!connect) {
        cout<<"MySQL Initialization failed";
        return 1;
    }

    connect = mysql_real_connect(connect, SERVER, USER, PASSWORD, DATABASE, 0, NULL, 0);

    if (connect) {
        cout<<"connection Succeeded\n";
    }
    else {
        cout<<"connection failed\n";
        return -1;
    }

    MYSQL_RES *res_set;
    MYSQL_ROW row;
    mysql_query (connect,"SELECT * FROM jumbleGame;");

    unsigned int i =0;
    res_set = mysql_store_result(connect);
    unsigned int numrows = mysql_num_rows(res_set);

    while (((row= mysql_fetch_row(res_set)) !=NULL )) {
             //cout<<" %s\n",row[i] !=NULL?row[i] : "NULL";
         cout <<"\t | \t" << row[i] << "\t | \t";
         cout <<  row[i+1] <<  "\t |"<< endl;
    }
    mysql_close (connect);
    return 0;
}
