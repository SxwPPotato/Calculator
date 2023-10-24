#include <iostream>
#include <math.h>

class Calculator {
private:
    double num1;
    double num2;

public:
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }

        else return  false;
    }

    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }

        else return  false;
    }
   
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }

};


    

int main()
{
    setlocale(LC_ALL, "russian");
    double num1 = 0;
    double num2 = 0;
    double YesorNot = 1;
    Calculator calculate;
    while (YesorNot != 0) {
        std::cout << "Введите num1: ";
        std::cin >> num1;

        while (calculate.set_num1(num1) == false) {
            std::cout << "Неверный ввод\n";
            std::cout << "Введите num1: ";
            std::cin >> num1;
        }
        std::cout << "Введите num2: ";
        std::cin >> num2;
      
        while (calculate.set_num2(num2) == false) {
            std::cout << "Неверный ввод\n";
            std::cout << "Введите num2: ";
            std::cin >> num2;
        }

        std::cout << "num1 + num2 = " << calculate.add() << "\n";
        std::cout << "num1 * num2 = " << calculate.multiply() << "\n";
        std::cout << "num1 - num2 = " << calculate.subtract_1_2() << "\n";
        std::cout << "num2 - num1 = " << calculate.subtract_2_1() << "\n";
        std::cout << "num1 / num2 = " << calculate.divide_1_2() << "\n";
        std::cout << "num2 / num1 = " << calculate.divide_2_1() << "\n";

        std::cout << "Хотите продолжить(1 - да, 0 - нет):  ";
        std::cin >> YesorNot;
    }
}
