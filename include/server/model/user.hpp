#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

/*
ORM全称是：Object Relational
Mapping(对象关系映射)，其主要作用是在编程中，把面向对象的概念跟数据库中表的概念对应起来。举例来说就是，我定义一个对象，那就对应着一张表，这个对象的实例，就对应着表中的一条记录。
*/
// User表的ORM类
class User {
 public:
  User(int id = -1, string name = "", string pwd = "",
       string state = "offline") {
    this->id = id;
    this->name = name;
    this->password = pwd;
    this->state = state;
  }

  void setId(int id) { this->id = id; }
  void setName(string name) { this->name = name; }
  void setPwd(string pwd) { this->password = pwd; }
  void setState(string state) { this->state = state; }

  int getId() { return this->id; }
  string getName() { return this->name; }
  string getPwd() { return this->password; }
  string getState() { return this->state; }

 protected:
  int id;
  string name;
  string password;
  string state;
};

#endif