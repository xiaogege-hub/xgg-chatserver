#include <mysql/mysql.h>
#include <iostream>
using namespace std;

int main() {
  MYSQL mysql;

  mysql_init(&mysql);
  mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "your_prog_name");
  if (!mysql_real_connect(&mysql, "127.0.0.1", "debian-sys-maint",
                          "mw3roMpd13ejwWzZ", "chat", 0, NULL, 0)) {
    fprintf(stderr, "Failed to connect to database: Error: %s\n",
            mysql_error(&mysql));
    return 0;
  }
}
