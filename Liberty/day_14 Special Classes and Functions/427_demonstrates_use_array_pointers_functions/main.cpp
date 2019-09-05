// Листинг 14,7 Пример пользования массива указателей на функции
#include<iostream>
using namespace std;

void Square (int&, int&);
void Cube (int&, int&);
void Swap (int&, int&);
void GetVals (int&, int&);
void PrintVals (int, int);

int main(){
    int valOne=1, valTwo=2;
    int choice, i;
    const int MaxArray = 5;
    void (*pFuncArray[MaxArray])(int&, int&);
    
    for(i=0; i<MaxArray; i++){
        cout << "(1)Changes Value (2)Square (3)Cube (4)Swap: ";
        cin >> choice;
        
        switch(choice){
            case 1:pFuncArray[i] = GetVals; break;
            case 2:pFuncArray[i] = Square; break;
            case 3:pFuncArray[i] = Cube; break;
            case 4:pFuncArray[i] = Swap; break;
            default:pFuncArray[i]=0;
        }
    }
    
    for(i=0; i<MaxArray; i++){
        if(pFuncArray[i]==0)
            continue;
        pFuncArray[i](valOne, valTwo);
        PrintVals(valOne, valTwo);
    }
    
    return 0;
}

void PrintVals (int x, int y){
    cout << "x: " << x << "y: " << y << endl;
}

void Square (int & rX, int & rY){
    cout << "Square rX " << rX << " rY " << rY;
    rX *= rX;
    rY *= rY;
}

void Cube (int & rX, int & rY){
    cout << "Cube  rX " << rX << " rY " << rY;
    int tmp;
    
    tmp = rX;
    rX *= rX;
    rY = rY * tmp;
    
    tmp = rY;
    rY *= rY;
    rY = rY * tmp;
}

void Swap (int & rX, int & rY){
    cout << "Swap rX " << rX << " rY " << rY;
    int temp;
    
    temp = rX;
    rX *= rY;
    rY = temp;
}

void GetVals (int & rValOne, int & rValTwo){
    cout << "New value for ValOne: ";
    cin >> rValOne;
    cout << "New value for ValTwo: ";
    cin >> rValTwo;
}

/*
 (1)Changes Value (2)Square (3)Cube (4)Swap: 1
 (1)Changes Value (2)Square (3)Cube (4)Swap: 2
 (1)Changes Value (2)Square (3)Cube (4)Swap: 3
 (1)Changes Value (2)Square (3)Cube (4)Swap: 4
 (1)Changes Value (2)Square (3)Cube (4)Swap: 2
 New value for ValOne: 2
 New value for ValTwo: 3
 x: 2y: 3
 x: 4y: 9
 x: 16y: 46656
 x: 746496y: 16
 x: -1089470464y: 256
 Program ended with exit code: 0
*/