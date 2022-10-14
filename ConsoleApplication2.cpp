#include <iostream>
#include <locale>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x1 = 0;
    float x2 = 0;
    float y1 = 0;
    float y2 = 0;
    float ans = 0;
    cout << "Введите координаты координаты первой точки через пробел" << "\n";
    cin >> x1 >> y1;
    cout << "Введите координаты координаты второй точки через пробел" << "\n";
    cin >> x2 >> y2;
    ans = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    cout << "Расстояние равно = " << ans;
    return 0;
}