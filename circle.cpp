#include <iostream>
 
using namespace std;
//Добавим констату Пи 
const double PI = 3.14159265358979323846;
 
//Функция вычисления длины окружности
double circleLenght(double r){
return 2*PI*r;
}
//Функция вычисления площади круга
double circleArea(double r){
return PI*r*r;
}
 
//Функция вычисления площади кругового сектора
double sectorArea(double r, double angle){
return (PI*r*r*angle)/360;
}
int main(){
double r, angle;
 
//Запросить радиус окружности
cout<< "Вычисление параметров окружности"<<endl;
cout<<"Введите радиус окружности: ";
cin>>r;
//Проверка соответствия радиуса
if (r<=0){
cout <<"Радиус должен быть положительным и не равным нулю!"<<endl;
return 1;
}
 
//Запростить угол сектора
cout <<"Введите угол сектора в градусах: "<<endl;
cin>>angle;
 if (angle<0 || angle >360){
cout <<"Угол должен быть от 0 до 360!" <<endl;
return 1;
}
cout<<"Результат: "<< endl;
cout<< "Длина окружности: "<< circleLenght(r)<<endl;
cout<< "Площадь круга: "<< circleArea(r)<<endl;
cout<< "Площадь сектора: "<< sectorArea(r, angle)<<endl;
 
return 0;
}
