/*Задача 5. Задержка

Цель: научиться делать паузы между действиями.
Тренировочное задание:
Напиши программу, которая:
Выводит 3.
Ждёт 1 секунду.
Выводит 2.
Ждёт 1 секунду.
Выводит 1.
Ждёт 1 секунду.
Выводит Поехали!*/

#include <iostream>
#include <thread>
#include <chrono>

int main () {

    std::cout << "3" << std::endl;
    std::this_thread::sleep_for (std::chrono::milliseconds(500));

    std::cout << "2" << std::endl;
    std::this_thread::sleep_for (std::chrono::milliseconds(300));

    std::cout << "1" << std::endl;
    std::this_thread::sleep_for (std::chrono::milliseconds(200));

    std::cout << "BOOOOM!!!" << std::endl;

    return 0;
}