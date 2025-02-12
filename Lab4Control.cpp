#include <iostream>
#include<limits>


using namespace std;

//lab1

//int Myroot(double a, double b, double c, double& x1, double& x2) {
//    if (a == 0) {
//        cout << "Коэффициент 'a' не может быть равен нулю." << endl;
//        return -1; 
//    }
//    double discriminant = b * b - 4 * a * c; 
//
//    if (discriminant > 0) {
//        x1 = (-b + sqrt(discriminant)) / (2 * a);
//        x2 = (-b - sqrt(discriminant)) / (2 * a);
//        return 1; 
//    }
//    else if (discriminant == 0) {
//        x1 = x2 = -b / (2 * a);
//        return 0;
//    }
//    else {
//        return -1; 
//    }
//}

//lab2 

bool Input(int& a, int& b) {
    cout << "Введите два целых числа (a и b): ";
    if (!(cin >> a)) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false; 
    }
    if (!(cin >> b)) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return false; 
    }
    return true;
}



int main() {
   
   
   

    //lab1

   /* double a, b, c;
    double x1, x2;
    cout << "Введите коэффициенты a, b и c: ";
    cin >> a >> b >> c;
    
    int result = Myroot(a, b, c, x1, x2);
    if (result == -1) {
        cout << "Корней уравнения нет." << endl;
    }
    else if (result == 0) {
        cout << "Корень уравнения один: x1 = x2 = " << x1 << endl;
    }
    else if (result == 1) {
        cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;*/

    //lab2 

    int a, b;
    if (!Input(a, b)) { 
        cerr << "error" << endl;
        return 1;
    }

    int s = a + b; 
    cout << "Сумма: " << s << endl; 

    return 0;

}