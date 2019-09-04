// Листинг 12,3
// Установка размера массива с помощью константы и перечисления
#include<iostream>
using namespace std;

int main(){
    enum WeekDays{ Sun, Mon, Tue, Wed, Thu, Fri, Sat, DaysInWeek };
    int ArrayWeek[DaysInWeek] = { 10, 20, 30, 40, 50, 60, 70 };
    
    cout << "The value at Tuesday is " << ArrayWeek[Tue] << endl;
    
    return 0;
}