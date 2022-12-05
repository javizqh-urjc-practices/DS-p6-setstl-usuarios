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
#include "Admin.h"

int main() { 
  // Initializing variables
  User *user1 = new User("10000","1234567A","paco");
  User *user2 = new User("20000","1234527J", "juan");
  User *user3 = new User("23412","1234547A","maria");

  Admin *admin1 = new Admin("30000","1234567A", "ELBOSS");
  Admin *admin2 = new Admin("72389","1267265A", "Administrator");
  Admin *admin3 = new Admin("12y33","8763246I", "Jefe");

  std::cout << "----------------------------------------------------------------\n";

  std::set<User> empty;
  std::cout << "Trying to iterate through an empty set:\n";
  printSet(empty);
  std::cout << "\n";

  std::set<User> databaseUser;
  databaseUser.insert(*user1);
  databaseUser.insert(*user2);
  databaseUser.insert(*user3);
  // El set ordena por orden alfabético automaticamente
  std::cout << "Trying to iterate through an set of only users:\n";
  printSet(databaseUser);
  std::cout << "\n";

  std::set<User> databaseAdmin;
  databaseAdmin.insert(*admin1);
  databaseAdmin.insert(*admin2);
  databaseAdmin.insert(*admin3);
  std::cout << "Trying to iterate through an set of only admins:\n";
  printSet(databaseAdmin);
  std::cout << "\n";

  std::set<User> databaseBoth;
  databaseBoth.insert(*user1);
  databaseBoth.insert(*user2);
  databaseBoth.insert(*user3);
  databaseBoth.insert(*admin1);
  databaseBoth.insert(*admin2);
  databaseBoth.insert(*admin3);
  std::cout << "Trying to iterate through an set of users and admins:\n";
  printSet(databaseBoth);
  std::cout << "\n";

  std::cout << "----------------------------------------------------------------\n";
  databaseUser.insert(*user1);
  std::cout << "Trying to add "<< *user1 <<"again to only user set:\n";
  printSet(databaseUser);
  std::cout << "\n";

  std::cout << "----------------------------------------------------------------\n";
  databaseUser.erase(*user1);
  std::cout << "Trying to erase "<< *user1 <<"in the only user set:\n";
  printSet(databaseUser);
  std::cout << "\n";

  std::cout << "----------------------------------------------------------------\n";
  databaseUser.erase(*user1);
  std::cout << "Trying to find "<< *user1 <<"in the only user set:\n";
  if (*databaseBoth.find(*user1) == *user1) std::cout << "True\n";
  else std::cout << "False\n";
}
