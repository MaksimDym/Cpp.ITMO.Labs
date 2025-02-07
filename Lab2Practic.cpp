#include <iostream>
#include <cmath>
#include<windows.h>
#include <math.h>
#include <ctime>
#include <vector>


using namespace std;

//std::string pointInFigure(double x, double y) {
//    
//    if (x * x + y * y < 9 && y > 0) {
//        return "внутри";
//    }
//    else if (x * x + y * y > 9 || y < 0) {
//        return "снаружи";
//    }
//    else {
//        return "на границе";
//    }
//}


//int main() {
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
    
    //lab2.1.1

    /*double x, y;
    std::cout << "Введите координату x : ";
    std::cin >> x ;
    std::cout << "Введите координату у : ";
    std::cin >> y;
    std::string result = pointInFigure(x, y);
    std::cout << result << std::endl;
    return 0;*/

    //lab2.1.2

   /* char op;
    cout << "Сделай свой выбор, собери авто свой мечты: ";
    cin >> op;

    switch (op)
    {
    case 'S':
        cout << "Радио играть должно\n";    
    case 'V':
        cout << "Кондиционер хочу\n";      
    default:
        cout << "Колеса круглые\n";
        cout << "Мощный двигатель\n";   
    }*/

    // lab 2.2.1
   
    /*double x, x1, x2, y;
    cout << "x1 = "; cin >> x1;
    cout << "x2 = "; cin >> x2;
    cout << "\tx\tsin(x)\n";
    x = x1;
    do
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    } while (x <= x2);
    return 0;*/

    //lab 2.2.2 

   /* int a, b, temp;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    while (a != b)
    {
        if (a > b)
            a -= b; 
        else
            b -= a;
    }
    cout << "НОД = " << a << endl;*/

    // lab 2.2.3

    // Первое задание , цикл с предусловием

    /*double x, x1, x2, y;
    cout << "x1 = ";
    cin >> x1;
    cout << "x2 = ";
    cin >> x2;
    cout << "\tx\tsin(x)\n";
    x = x1; 
    while (x <= x2) {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01; 
    }
    return 0;*/

    //Второе задание , цикл с постусловием

   /* int a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    do {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    } while (a != b);

    cout << "НОД = " << a << endl;

    return 0;*/

   
    // Lab 2.3.1

   /* srand(time(NULL));
    int a, b, c;
    int k = 0, n = 10;
    for (int i = 1;i <= n;i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        
        if (a * b != c)
        {
            k++; 
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
        cout << "Count error: " << k << endl;
        return 0;
    }*/
   
    // lab 2.4.1 

      /*int k, m;
      cout << "Введите значение k: ";
      cin >> k;
      cout << "Введите значение m: ";
      cin >> m;
      int s = 0; 
      for (int i = 1; i <= 100; i++) {
         if ((i > k) && (i < m)) {
              continue;
            }
          s += i;
      }
      cout << "Сумма = " << s << endl;
        return 0;*/

     

      



//}






