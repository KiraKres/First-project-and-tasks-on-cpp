/*Задача 8. Вектор строк

Цель: хранить много строк в одной переменной.
Тренировочное задание:
Напиши программу, которая:
Создаёт std::vector<std::string> со строками:
text
Удаляю файл 1...
Удаляю файл 2...
Удаляю файл 3...
Удаляю файл 4...
В цикле выводит их по одной с паузой.*/

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

int main () {

    std::vector<std::string> text = {
        "Deleting file 1...",
        "Deleting file 2...",
        "Deleting file 3...",
        "Deleting file 4...",
    };

// Варианты
// std::string line	
// line копирует строку из вектора	Медленнее (копия)

// const std::string& line	
// line ссылается на строку в векторе	Быстрее (без копии)

    //для каждой строки из вектора...
    for (const std::string& line : text) {

        std::cout << line << std::endl;
        std::this_thread::sleep_for (std::chrono::milliseconds(500));

    }

    return 0;
}