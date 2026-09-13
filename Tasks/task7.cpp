/*Задача 7. Цикл + задержка

Цель: соединить цикл и паузу — это ядро «фейкового удаления».
Тренировочное задание:
Напиши программу, которая:
Выводит строки по одной с паузой 500 мс:
text
Строка 1
Строка 2
Строка 3
Строка 4
Строка 5*/

#include <iostream>
#include <thread>
#include <chrono>

int main () {

    for (int i = 1; i < 6; i++) {

        std::cout << "String " << i << std::endl;
        std::this_thread::sleep_for (std::chrono::milliseconds(500));

    }

    return 0;
}