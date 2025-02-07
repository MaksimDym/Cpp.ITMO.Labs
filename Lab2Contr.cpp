#include <iostream>
#include <cmath>
#include<windows.h>
#include <math.h>
#include <ctime>
#include <vector>
#include <string>


using namespace std;

//lab1

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<int> generate_primes(int limit) {
    vector<int> primes;
    for (int num = 2; num <= limit; ++num) {
        if (is_prime(num)) {
            primes.push_back(num);
        }
    }
    return primes;
}

vector<int> super_primes(int limit) {
    vector<int> primes = generate_primes(limit);
    vector<int> super_primes_list;


    for (size_t i = 1; i <= primes.size(); ++i) {
        if (is_prime(i)) {
            super_primes_list.push_back(primes[i - 1]);
        }
    }

    return super_primes_list;
}

//lab2 
    bool isValidSnils(const std::string& snils) {
    if (snils.length() != 11) { // Проверка длины строки(11)
        return false;
    }

    for (size_t i = 0; i < 7; ++i) {
        if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2]) {
            return false;     // Проверка на одинаковые цифры
        }
    }

    int sum = 0;
    for (size_t i = 0; i < 9; ++i) {
        sum += (snils[i] - '0') * (9 - i); // Расчёт суммы согласно условию
    }

    int controlNumber = 0;
    if (sum < 100) {
        controlNumber = sum; // Вычисляем контрольное число
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

    int givenControlNumber = stoi(snils.substr(9, 2));
    return controlNumber == givenControlNumber; 
}


    //lab3 

    void getMinimumCoins(int amount) {
        
        std::vector<int> coins = { 1000, 500, 100, 50, 10, 5, 2, 1 };
        std::vector<int> coinCount(coins.size(), 0); 

        for (size_t i = 0; i < coins.size(); ++i) {
            while (amount >= coins[i]) { 
                amount -= coins[i]; 
                coinCount[i]++; 
            }
        }

        
        std::cout << "Необходимые монеты для выдачи суммы: " << std::endl;
        for (size_t i = 0; i < coins.size(); ++i) {
            if (coinCount[i] > 0) {
                std::cout << coins[i] << " руб. - " << coinCount[i] << " шт." << std::endl;
            }
        }
    }



//lab4

string getShooterLevel(int score) {
    if (score >= 50) {
        return "Снайпер";
    }
    else if (score >= 30) {
        return "Стрелок";
    }
    else {
        return "Новичок";
    }
}


int checkHit(double x, double y, double targetX, double targetY) {
    double distance = sqrt(pow(x - targetX, 2) + pow(y - targetY, 2));
    if (distance <= 5) { 
        return 10; //10 очков
    }
    else if (distance <= 10) {
        return 5; //5 очков
    }
    else {
        return 0;  // промах
    }
}





int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251); 
   
    // lab1
    
    /*int limit = 1000;
    vector<int> result = super_primes(limit);

    cout << "Суперпростые числа до " << limit << ": ";
    for (int sp : result) {
        cout << sp << " ";
    }
    cout << endl;
    return 0;*/

    //lab2 

    /*std::string snils;
    std::cout << "Введите номер СНИЛС: ";
    std::cin >> snils;

    if (isValidSnils(snils)) {
        std::cout << "Номер СНИЛС валиден." << std::endl;
    }
    else {
        std::cout << "Номер СНИЛС невалиден." << std::endl;
    }

    return 0;*/

    //Lab3 

   /* int amount;
    std::cout << "Введите сумму для выдачи (в рублях): ";
    std::cin >> amount;

    if (amount < 0) {
        std::cout << "Сумма не может быть отрицательной." << std::endl;
        return 1;
    }

    getMinimumCoins(amount);

    return 0;*/



    //lab4 

    //srand(static_cast<unsigned int>(time(0))); 
    //double targetX = rand() % 101; 
    //double targetY = rand() % 101; 
    //cout << "Центр мишени находится в (" << targetX << ", " << targetY << ")" << endl;
    //int totalScore = 0;
    //int shotsFired = 0;
    //while (totalScore < 50) { 
    //    double x, y;
    //    cout << "Введите координату x: ";
    //    cin >> x;
    //    cout << "Введите координату y: ";
    //    cin >> y;

    //    // Случайная помеха
    //    double noiseX = ((rand() % 601) / 100.0) - 7; 
    //    double noiseY = ((rand() % 601) / 100.0) - 7;  
    //    x += noiseX; 
    //    y += noiseY;
    //    
    //    int score = checkHit(x, y, targetX, targetY);
    //    totalScore += score;
    //    shotsFired++;
    //    if (score > 0) {
    //        cout << "Попадание! Вы заработали " << score << " очков." << endl;
    //    }
    //    else {
    //        cout << "Промах!" << endl;
    //    }
    //    cout << "Текущий счет: " << totalScore << " очков." << endl;
    //}
    //cout << "Вы сделали " << shotsFired << " выстрелов и набрали " << totalScore << " очков." << endl;
    //string level = getShooterLevel(totalScore);
    //cout << "Ваш уровень стрелка: " << level << endl;
    //return 0;

     







}

