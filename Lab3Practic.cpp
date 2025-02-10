#include <iostream>
#include <string>
#include <cmath>


using namespace std;
 
//lab1 , lab2 

//void privet(string);

//string privet(string name)
//{
//	string str = name + ", " + "hello!\n";
//	return str;
//}
//
//void privet(string name, int k)
//{
//	cout << name << ", " << "hello! " << "you input " << k << endl;
//}

// lab3 

long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;
    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }
    return R;
}

int addNumbers(int n) {
    if (n == 1) return 1; 
    else return (n + addNumbers(n - 1)); 
}

int addNumbers(int start, int end) {
    if (start > end) return 0; 
    return start + addNumbers(start + 1, end); 
}

int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}

int main()
{
   /* SetConsoleOutputCP(1251);
    SetConsoleCP(1251);*/
    
    //lab1 , lab2 

    /*string name;
    cout << "What is your name?" << endl;
    cin >> name;
    string nameOut = privet(name);
    cout << nameOut << endl;

    int k;
    cout << "Input number:" << endl;
    cin >> k;
    privet(name, k); 

    return 0;*/

    // lab3 

    /*double a;
    int n;
    cout << "Введите действительное число a (1 <= a <= 1000): ";
    cin >> a;
    cout << "Введите натуральное число n (1 <= n <= 10): ";
    cin >> n;
    if (a < 1 || a > 1000 || n < 1 || n > 10) {
        cout << "Ошибка: Входные данные вне допустимого диапазона." << endl;
        return 1;
    }
    long double result = firBinSearch(a,n);
    cout.precision(6);
    cout << "Корень " << n << "-й степени из " << a << " равен: " << result << endl;
    return 0;*/

    // lab4 

    int n;
    cout << "Введите положительное целое число: ";
    cin >> n;

    if (n < 1) {
        cout << "Пожалуйста, введите положительное целое число." << endl;
        return 1;
    }

    int result = addNumbers(n);
    cout << "Сумма чисел от 1 до " << n << " равна " << result << endl;

    int start, end;
    cout << "Введите начальное и конечное числа для интервала: ";
    cin >> start >> end;

    if (start < 1 || end < 1 || start > end) {
        cout << "Пожалуйста, введите корректные положительные целые числа." << endl;
        return 1;
    }

    int intervalResult = addNumbers(start, end);
    cout << "Сумма чисел от " << start << " до " << end << " равна " << intervalResult << endl;

    int m, n_gcd;
    cout << "Введите два положительных целых числа для нахождения НОД: ";
    cin >> m >> n_gcd;

    if (m < 1 || n_gcd < 1) {
        cout << "Пожалуйста, введите положительные целые числа." << endl;
        return 1;
    }

    int resultGCD = gcd(m, n_gcd);
    cout << "Наибольший общий делитель чисел " << m << " и " << n_gcd << " равен " << resultGCD << endl;

    return 0;


}

