/*Задача 1. Ввод-вывод

Цель: научиться принимать данные от пользователя и выводить их обратно.
Тренировочное задание.
Напиши программу, которая:
Выводит на экран: Введи своё имя:
Ждёт, пока пользователь введёт что-то.
Выводит: Привет, <имя>!*/

#include <iostream> 
#include <string>

int main () {

    std::cout << "Hello? what`s your name?" << std::endl;

    std::string text;
    std::cin >> text;
    
    std::cout << "Nice to meet u, " << text << std::endl;

    return 0;

}