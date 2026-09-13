/*Задача 2. Ввод числа и вывод числа

Цель: понять разницу между std::string и int — и почему это важно при вводе.
Задание:
Напиши программу, которая:
Просит ввести целое число.
Читает его.
Выводит: Ты ввёл число: <число>*/

#include <iostream>
#include <windows.h> //это если я хочу добавить чтение utf-8

int main () {

    SetConsoleOutputCP(65001); //это если я хочу добавить чтение utf-8
    SetConsoleCP(65001);


    std::cout << "Input any integer number" << std::endl;

    int number = 0;
    std::cin >> number;
    
    std::cout << "Your namber is: " << number << std::endl;

    return 0;
}