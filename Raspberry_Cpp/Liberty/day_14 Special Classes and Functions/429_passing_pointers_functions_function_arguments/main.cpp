// Листинг 14,8 Передачя указателя на функцию другой функции
#include <iostream>
using namespace std;

void Square(int&, int&);
void Cube(int&, int&);
void Swap(int&, int&);
void GetVals(int&, int&);
void PrintVals(void(*)(int&, int&),int&, int&);

int main(){
    int valOne=1, valTwo=2;
    int choice;
    bool fQuit = false;
    
    void (*pFunc)(int&, int&);
    
    while(fQuit == false){
        cout << "(0)Quit (1)Change Values (2)Square (3)Cube (4)Swap: ";
        cin >> choice;
        switch(choice){
            case 1:pFunc = GetVals; break;
            case 2:pFunc = Square; break;
            case 3:pFunc = Cube; break;
            case 4:pFunc = Swap; break;
            default:fQuit = true; break;
        }
        if(fQuit == true)
            break;
        PrintVals(pFunc, valOne, valTwo);
    }
    
    return 0;
}

void PrintVals(void(*pFunc)(int&, int&),int& x, int& y){
    cout << "x: " << x << " y: " << y << endl;
    pFunc(x,y);
    cout << "x: " << x << " y: " << y << endl;
}

void Square(int & rX, int & rY){
    rX*=rX;
    rY*=rY;
}

void Cube(int & rX, int & rY){
    int tmp;
    tmp = rX;
    rX*= rY;
    rX = rX*tmp;
    
    tmp = rY;
    rY*= rY;
    rY = rY*tmp;
}

void Swap(int & rX, int & rY){
    int temp;
    temp = rX;
    rX = rY;
    rY = temp;
}

void GetVals(int & rValOne, int & rValTwo){
    cout << "New value for ValOne: ";
    cin >> rValOne;
    cout << "New value for ValTwo: ";
    cin >> rValTwo;
}

/*
 (0)Quit (1)Change Values (2)Square (3)Cube (4)Swap: 1
 x: 1 y: 2
 New value for ValOne: 2
 New value for ValTwo: 3
 x: 2 y: 3
 (0)Quit (1)Change Values (2)Square (3)Cube (4)Swap: 4
 x: 2 y: 3
 x: 3 y: 2
 (0)Quit (1)Change Values (2)Square (3)Cube (4)Swap: 0
 Program ended with exit code: 0
*/
