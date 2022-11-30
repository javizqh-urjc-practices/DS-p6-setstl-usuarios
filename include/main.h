/**
 * @file main.h
 * @author Javier Izquierdo Hernandez (j.izquierdoh.2021@alumnos.urjc.es)
 * @brief 
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <set>
#include <iostream>

#ifndef MAIN_H
#define	MAIN_H

template <typename T>
void printSet(std::set<T> &set){for (auto it = set.begin(); it != set.end(); it++) std::cout << *it ;};

int main();

#endif