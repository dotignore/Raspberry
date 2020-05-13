// Листинг 5.4 Видимость переменных
// объявленных внутри блока
#include<iostream>
using std::cout;
using std::endl;

void myFunc();

int main(){
    int x=5;
    cout << "\n1: In main x is: " << x;
    
    myFunc();
    
    cout << "\n6: Back in main, x is: " << x << endl;
    
    return 0;
}

void myFunc(){
    int x = 8;
    cout << "\n2: In myFunc, local x: " << x << endl;
    
    {
        cout << "\n3: In block in myFunc, x is " << x;
        int x=9;
        cout << "\n4: Very local x: " << x;
    }
    cout << "\n5: Out of block, in myFunc, x: " << x << endl;
}
 

/*
1: In main x is: 5
2: In myFunc, local x: 8

3: In block in myFunc, x is 8
4: Very local x:9
5: Out of block, in myFunc, x: 8

6: Back in main, x is: 5
Program ended with exit code: 0
*/