/*Задача 4. Сравнение строк

Цель: понять, как сравнивать не числа, а текст.
Тренировочное задание:
Напиши программу, которая:
Просит ввести пароль.
Если пароль — secret — выводит Доступ разрешён.
Иначе — Доступ запрещён.*/

#include <iostream>
#include <string>

int main () {

    std::cout << "Enter password: " << std::endl;

    std::string key;
    std::cin >> key;

    if (key == "secret") {
        std::cout << "Right password!" << std::endl;
    } else {
        std::cout << "Access denied." << std::endl;
    }

    return 0;
}