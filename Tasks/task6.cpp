/*Задача 6. Цикл for

Цель: повторять действия много раз.
Тренировочное задание:
Напиши программу, которая:
Выводит числа от 1 до 10, каждое на новой строке.
Потом усложни: пусть выводит от 10 до 1 (обратный отсчёт). Потом — только чётные.*/

#include <iostream>

int main () {
    std::cout << "From 1 to 10" << std::endl;

    for (int i = 1; i < 11; i++) {
        std::cout << i << std::endl;

    }

    std::cout << "From 10 to 1" << std::endl;
    int j = 10;
    while (j >= 1) {
        std::cout << j << std::endl;
        j--;
    }

    std::cout << "Only even number (for)" << std::endl;
    for (int k = 0; k <=10; k++) { 
        if (k % 2 == 0) {
            std::cout << k << std::endl;
        } 
    }

    return 0;
}