#include <iostream>
#include <cmath>

using namespace std;
 
int main(){
    float a, b, c;//Инизиализация переменных

    cout<<"Введите длину первой стороны треугольника: ";
    cin>>a;
    cout<<"Введите длину второй стороны треугольника: ";
    cin>>b;
    cout<<"Введите длину третьей стороны треугольника: ";
    cin>>c;
    if (a>0 && b>0 && c>0){
        if (a + b > c && b + c > a && c + a >b){
            float perimetr = a + b + c;
            
            float p = perimetr / 2;
            float ploshad = sqrt(p*(p-a)*(p-b)*(p-c));
            
            cout<<"Периметр треугольника: " << perimetr <<endl;
            cout<<"Площадь треугольника: " << ploshad <<endl;

            if (a==b || b==c || a==c)
            {
                cout<<"Треугольник равнобедренный"<<endl;
            }
            else
            {
                cout<<"Треугольник не равнобедренный"<<endl;
            }
        }
        else
        {
            cout<<"Такого треугольника не существует";
        }
    }
    else
    {
        cout<<"Введены отрицательные значения!!!"<<endl;
    }
        return 0;
}
