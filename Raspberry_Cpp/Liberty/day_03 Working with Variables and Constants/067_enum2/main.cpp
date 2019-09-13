#include <iostream>
using namespace std;

int main()
{
    const int Monday = 1;
    const int Tuesday = 2;
    const int Wednesday = 3;
    const int Thursday = 4;
    const int Friday = 5;
    const int Saturday = 6;
    const int Sunday = 0;
    
    int today;
    cout << "Введите число 0-6" << endl;
    cin >> today;
    
    if (today == Sunday || today == Saturday)
        cout << "\n 0, 6 это выходной день \n";
    else
        cout << "\n 1, 2, 3, 4, 5 Это рабочий день.\n";
    
    return 0;
}