

#include<cmath>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector> 
#include <cstdlib>
#include <set> 



using namespace std;

//int main()
//{
//    // 1.1
//
//    /*string name;
//    cout << "What is your name? ";
//    getline(cin, name);
//    cout << "Hello, " << name << "!\n";*/
//
//    //  1.2
//
//    //system("chcp 1251");
//    //double a, b;
//    //cout << "Введите a и b:\n";
//    //cin >> a; // ввод с клавиатуры значения a
//    //cin >> b; // ввод с клавиатуры значения b
//    //double x = a / b; // вычисление значения x
//    //cout.precision(4);
//    //cout << "\nx = " << x << endl; //вывод результата на экран
//    //cout << sizeof(a / b) << ends << sizeof(x) << endl;
//    //return 0;
//
//
//    /*system("chcp 1251");
//    string name;
//    cout << "Введите свое имя\n";
//    double a, b;
//    cout << "Введите a и b:\n";
//    cin >> a;
//    cin >> name;
//    cin >> b;
//    double x = a / b;
//    cout << "\nx = " << x << endl;
//    cout << "Привет, " << name << "!\n";
//    return 0;*/
//
//    //1.3
//
//    /*double perimetr;
//    cout << "Enter the perimeter value of the triangle \n";
//    cin >> perimetr;
//    double side = perimetr / 3;
//    double p = side * 3 / 2;
//    double area = sqrt(p * (p - side) * (p - side) * (p - side));
//    cout.precision(3);
//    cout << "Side\t\tArea" << endl;
//    cout << "Value\t\tResult" << endl;
//    cout << side << "\t\t" << area << endl;*/
//
//    // Control 
//
//    //const int numVertices = 5;
//
//    //vector<double> x(numVertices);
//    //vector<double> y(numVertices);
//
//    //auto areCollinear = [](double x1, double y1, double x2, double y2, double x3, double y3) {
//    //    return (y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1);
//    //    };
//
//    //cout << "Введите координаты пятиугольника (x y):" << endl;
//
//    //for (int i = 0; i < numVertices; ++i) {
//    //    cout << "Вершина" << i + 1 << ": ";
//    //    cin >> x[i] >> y[i];
//    //}
//    ////Проверка , является ли фигура с заданными координатами пятиугольником 
//    //set<pair<double, double>> uniquePoints;
//
//    //for (size_t i = 0; i < x.size(); ++i) {
//    //    uniquePoints.insert({ x[i], y[i] });
//    //}
//
//    //if (uniquePoints.size() != x.size() || uniquePoints.size() < 3) {
//    //    cout << "Ошибка: введенные координаты не могут образовать пятиугольник." << endl;
//    //    return 1;
//    //}
//
//    //// Проверка , находятся ли точки на одной прямой
//    //for (int i = 0; i < numVertices; ++i) {
//    //    if (areCollinear(x[i], y[i], x[(i + 1) % numVertices], y[(i + 1) % numVertices],
//    //        x[(i + 2) % numVertices], y[(i + 2) % numVertices])) {
//    //        cout << "Ошибка: введенные координаты не могут образовать пятиугольник." << endl;
//    //        return 1;
//    //    }
//    //}
//
//    //double area = 0.0;
//    //for (int i = 0; i < numVertices; ++i) {
//    //    int j = (i + 1) % numVertices;
//    //    area += x[i] * y[j];
//    //    area -= y[i] * x[j];
//    //}
//
//    //area = abs(area) / 2.0;
//    //cout.precision(3);
//    //cout << " Площадь : " << area << endl;
//
//    //return 0;
//
//
//
//
//}
