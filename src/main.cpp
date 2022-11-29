/**
 * @file main.cpp
 * @author Javier Izquierdo Hernandez (j.izquierdoh.2021@alumnos.urjc.es)
 * @brief 
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "main.h"
#include "User.h"
#include "Admin.h"
#include <set>
#include <iostream>

int main(int argc, char **argv) { 
  std::set<User> database;
  User *user1 = new User("10000","1234567A","paco");
  User *user2 = new User("20000","1234527J", "juan");
  Admin *admin1 = new Admin("30000","1234567C", "ELBOSS");
  database.insert(*user1);
  database.insert(*user2);
  //database.insert(*admin1);

  for (auto it = database.begin(); it != database.end(); it++)
    std::cout << *it ;
}