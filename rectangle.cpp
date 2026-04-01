#include<iostream>
#include<cmath>    
using namespace std;

//Ф-ия вычисления периметра
double perimeter(double a, double b) {
    double P = a * 2 + b * 2;
    return P;
}
 
//Ф-ия вычисления площади
double surface(double a, double b) {
    double S = a * b;
    return S;
}

//Ф-ия вычисления диагонали
double diagonal(double a, double b) {
    double D = sqrt(a * a + b * b);
    return D;
}

//Основная программа 
int main() {
    setlocale(LC_ALL, "ru");
    double side1, side2; //Инициализация переменных

    //Ввод длины стороны1 
    cout << "Введите длину первой стороны прямоугольника: ";
    cin >> side1;

    //Проверка длины стороны1 на соответствие
    while (side1 <= 0) {
        cout << "Длина стороны не может быть отрицательной или равной нулю! Введите положительно значение: ";
        cin >> side1;
    }

    //Ввод длины стороны2
    cout << "Введите длину второй стороны прямоугольника: ";
    cin >> side2;

    //Проверка длины стороны2 на соответствие 
    while (side2 <= 0) {
        cout << "Длина стороны не может быть отрицательной или равной нулю! Введите положительное значение: ";
        cin >> side2;
    }

    //Вывод результатов
    cout << "Периметр прямоугольника со сторонами " << side1 << " и " << side2 << " равен " << perimeter(side1, side2) << endl;

    cout << "Площадь прямоугольника со сторонами " << side1 << " и " << side2 << " равна " << surface(side1, side2) << endl;

    cout << "Диагональ прямоугольника со сторонами " << side1 << " и " << side2 << " равна " << diagonal(side1, side2) << endl;

}

