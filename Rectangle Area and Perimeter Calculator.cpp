#include <iostream>
using namespace std;

int main()
{
    int lenght, width, perimeter, area;
    cout << "enter lenght ";
    cin >> lenght;
    cout << "enter width ";
    cin >> width;
    area = lenght * width;
    cout << lenght << "*" << width << "=" << area << " \n";

    perimeter = 2 * (lenght + width);
    cout << 2 << "*" << lenght << "+" << width << "=" << perimeter;
    return 0;
    system("pause");
}