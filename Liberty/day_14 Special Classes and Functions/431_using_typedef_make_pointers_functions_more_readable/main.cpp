// Листинг 14,9 Использование typedef для объявления типа указателей на функции
// VPF какой смыс непонял?
#include <iostream>
using namespace std;

void Square (int&, int&);
void Cube (int&, int&);
void Swap (int&, int&);
void GetVals (int&, int&);
typedef void(*VPF) (int&, int&);    // typedef объявляется новый тип VFP как указатель на функцию
void PrintVals (VPF, int&, int&);   // PrintVals принимает 3 параметра

int main(){
    int valOne=1, valTwo=2;
    int choice;
    bool fQuit = false;
    
    VPF pFunc;                      // pFunc объявляются как принадлежащей типу VPF
    
    while(fQuit == false){
        cout << "(0)Quit (1)Change Values (2)Square (3)Cube (4)Swap";
        cin >> choice;
        switch (choice) {
            case 1:pFunc = GetVals; break;
            case 2:pFunc = Square; break;
            case 3:pFunc = Cube; break;
            case 4:pFunc = Swap; break;
            default:fQuit = true; break;
        }
    if (fQuit == true)
        break;
        PrintVals(pFunc, valOne, valTwo);
    }
    
    return 0;
}

void PrintVals(VPF pFunc, int& x, int& y){
    cout << "x: " << x << " y: " << y << endl;
    pFunc(x,y);
    cout << "x: " << x << " y: " << y << endl;
}

void Square (int& rX, int& rY){
    rX *= rX;
    rY *= rY;
}

void Cube (int& rX, int& rY){
    int tmp;
    
    tmp = rX;
    rX *= rX;
    rX = rX *tmp;
    
    tmp = rY;
    rY *= rY;
    rY = rY *tmp;
}

void Swap (int& rX, int& rY){
    int temp;
    
    temp = rX;
    rX = rY;
    rY = temp;
}

void GetVals (int& rValOne, int& rValTwo){
    cout << "New value for ValOne ";
    cin >> rValOne;
    cout << "New value for ValTwo ";
    cin >> rValTwo;
}

/*
(0)Quit (1)Change Values (2)Square (3)Cube (4)Swap1
x: 1 y: 2
New value for ValOne2
New value for ValTwo3
x: 2 y: 3
(0)Quit (1)Change Values (2)Square (3)Cube (4)Swap3
x: 2 y: 3
x: 8 y: 27
(0)Quit (1)Change Values (2)Square (3)Cube (4)Swap2
x: 8 y: 27
x: 64 y: 729
(0)Quit (1)Change Values (2)Square (3)Cube (4)Swap4
x: 64 y: 729
x: 729 y: 64
(0)Quit (1)Change Values (2)Square (3)Cube (4)Swap0
Program ended with exit code: 0
*/