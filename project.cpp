/**/

#include <iostream>
#include <vector>
#include <chrono>
#include <string>
#include <thread>
#include <cstdlib> //ТАК ДЕЛАТЬ НЕЛЬЗЯ обращаться на прямую к system не безопасно (но для мема можно)
#include "delete.h"

int main () {

    std::cout << "Hi, do u know what is 66 + 1? " << std::endl;

    int i = 0;

    while (true) {

    std::cin >> i;

    if (i == 67 ) {

        std::cout << "Ha-ha! That's kinda fun" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));

        for (const std::string& line : delet) {

            std::cout << line << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));

        }

        break;

    } else {

        std::cout << "NO. Are u stupid?\nTry agian" << std::endl;

    }
    }

    std::cout << "\nSystem will shut down in 0 seconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    system("shutdown /s /t 0");

    return 0;
}