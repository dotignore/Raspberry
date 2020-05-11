// листинг 7,14
// Вложенные цыклы с оператором for
#include<iostream>
using namespace std;

int main(){
    int rows, colums;
    char theChar;
    
    cout << "How many rows? ";
    cin >> rows;
    
    cout << "How many colums? ";
    cin >> colums;
    
    cout << "What character? ";
    cin >> theChar;
    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<colums; j++)
            cout << theChar;
            cout << "\n";

    }
    return 0;
}