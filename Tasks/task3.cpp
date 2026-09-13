/*Задача 3. Условие if
Цель: научиться принимать решения в программе.

Тренировочное задание:
Напиши программу, которая:
Просит ввести число.
Если число больше 10 — выводит Большое число.
Иначе — выводит Маленькое число.
Потом усложни: добавь случай «ровно 10» → Ровно десять.*/

#include <iostream>

int main () {

    std::cout << "Input any integer number: " << std::endl;

    int number = 0;
    std::cin >> number;

    if (number > 10) {
        std::cout << "Big number" << std::endl;
    } else if (number < 10) {
        std::cout << "Small number" << std::endl;
    } else {
        std::cout << "Exactly ten!" << std::endl;
    }

    return 0;
}