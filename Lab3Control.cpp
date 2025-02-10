#include <iostream>
#include <string>
#include <cctype>
#include<windows.h>
#include <cmath> 

using namespace std;

// lab1 

bool isValidSnils(const string& snils) {
    string cleanedSnils;

    for (char ch : snils) {
        if (isdigit(ch)) {
            cleanedSnils += ch;
        }
        else if (ch != ' ' && ch != '-') {
            return false; 
        }
    }

    if (cleanedSnils.length() != 11) {
        return false;
    }

    for (size_t i = 0; i < 7; ++i) {
        if (cleanedSnils[i] == cleanedSnils[i + 1] && cleanedSnils[i] == cleanedSnils[i + 2]) {
            return false;
        }
    }

    int sum = 0;
    for (size_t i = 0; i < 9; ++i) {
        sum += (cleanedSnils[i] - '0') * (9 - i);
    }

    int controlNumber = 0;
    if (sum < 100) {
        controlNumber = sum;
    }
    else if (sum == 100 || sum == 101) {
        controlNumber = 0;
    }
    else {
        controlNumber = sum % 101;
        if (controlNumber == 100) {
            controlNumber = 0;
        }
    }

    int givenControlNumber = stoi(cleanedSnils.substr(9, 2));
    return controlNumber == givenControlNumber;
}

// lab2 

double cubicRootUsingPow(double a) {
    return pow(a, 1.0 / 3.0);
}


double cubicRootIterative(double a) {
    if (a == 0) return 0; 

    double x = a; 
    double epsilon = 1e-7;

    while (true) {
        double nextX = (2 * x + a / (x * x)) / 3; 
        if (abs(nextX - x) < epsilon) break; 
        x = nextX;
    }

    return x;
}

// lab3 

double areaEquilateralTriangle(double side) {
    return (sqrt(3) / 4) * (side * side);
}


double areaScaleneTriangle(double a, double b, double c) {
    double s = (a + b + c) / 2; // Полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c));
}


//lab4 

int sumSeries(int n) {
   
    if (n == 1) {
        return 5;
    }
    return 5 * n + sumSeries(n - 1);
}

//lab5

string decimalToBinary(int num) {
    if (num == 0) {
        return "";
    }
    else {
        return decimalToBinary(num / 2) + to_string(num % 2);
    }
}

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
   
    //lab1

   /* string snils;
    cout << "Введите номер СНИЛС: ";
    getline(cin, snils); 

    if (isValidSnils(snils)) {
        cout << "СНИЛС валиден" << endl;
    }
    else {
        cout << "СНИЛС не валиден" << endl;
    }
    return 0;*/

    //lab2 

   /* double number;

    cout << "Введите число для вычисления кубического корня: ";
    cin >> number;
   
    double rootUsingPow = cubicRootUsingPow(number);
    double rootIterative = cubicRootIterative(number);
    
    cout << "Кубический корень (с использованием pow): " << rootUsingPow << endl;
    cout << "Кубический корень (с использованием итерационной формулы): " << rootIterative << endl;
    return 0;*/

    //lab3 

  /*  int choice;
    cout << "Выберите тип треугольника:" << endl;
    cout << "1. Равносторонний" << endl;
    cout << "2. Разносторонний" << endl;

    cout << "Введите номер типа треугольника (1 или 2): ";
    cin >> choice;

    if (choice == 1) {
        double side;
        cout << "Введите длину стороны равностороннего треугольника: ";
        cin >> side;
        double area = areaEquilateralTriangle(side);
        cout << "Площадь равностороннего треугольника: " << area << endl;

    }
    else if (choice == 2) {
        double a, b, c;
        cout << "Введите длину первой стороны разностороннего треугольника: ";
        cin >> a;
        cout << "Введите длину второй стороны разностороннего треугольника: ";
        cin >> b;
        cout << "Введите длину третьей стороны разностороннего треугольника: ";
        cin >> c;
        if (a + b > c && a + c > b && b + c > a) {
            double area = areaScaleneTriangle(a, b, c);
            cout << "Площадь разностороннего треугольника: " << area << endl;
        }
        else {
            cout << "Ошибка: Указанные стороны не могут образовать треугольник." << endl;
        }

    }
    else {
        cout << "Неверный выбор. Пожалуйста, выберите 1 или 2." << endl;
    }

    return 0;*/


    // lab4

   /* int n;
    cout << "Введите значение n (n > 0): ";
    cin >> n;
   
    if (n <= 0) {
        cout << "Ошибка: n должно быть больше 0." << endl;
        return 1;
    }
    
    int result = sumSeries(n);
    cout << "Сумма ряда S = 5 + 10 + 15 + ... + 5 * " << n << " равна: " << result << endl;
    return 0;*/


    //lab5

    int number;
    cout << "Введите целое положительное число: ";
    cin >> number;

    if (number < 0) {
        cout << "Пожалуйста, введите положительное число." << endl;
        return 1;
    }

    string binaryRepresentation = decimalToBinary(number);

    if (binaryRepresentation.empty()) {
        binaryRepresentation = "0";
    }

    cout << "Двоичное представление числа " << number << " равно " << binaryRepresentation << endl;
    return 0;



}

