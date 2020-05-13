// Листинг 5,1  Использование прототипов фунций
#include<iostream>
using std::cout;
using std::cin;

int Area(int lenght, int width); // прототип функции

int main(){
    int lenghtOfYard;
    int widthOfYard;
    int areaOfYard;
    
    cout << "\nHow wide is your yard? ";
    cin >> widthOfYard;
    cout << "\nHow long is your yard? ";
    cin >> lenghtOfYard;
    
    areaOfYard = Area(lenghtOfYard, widthOfYard);
    
    cout << "\nYour yard is ";
    cout << areaOfYard;
    cout << " square feet \n\n";
    
    return 0;
}

int Area(int yardLength, int yardWidth){
    return yardLength * yardWidth;
}
