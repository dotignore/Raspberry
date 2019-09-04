// листинг 7,15
// Нахождение n-uj члена ряда Фибоначчи
// с помощью цикла
#include<iostream>
using namespace std;

int fib(int positin);

int main(){
    int answer, position;
    cout << "Which position?";
    cin >> position;
    cout << "\n";
    
    answer = fib(position);
    
    cout << answer << " is the " << position << " Fibonacci number.\n";
    
    return 0;
}

int fib(int n){
    
    int minusOne=1, minusTwo=1, answer=2;
    
    if(n<3)
        return 1;
    
    for(n-=3; n; n--){
        cout << " n " << n << endl;
        minusTwo = minusOne;
        //cout << " minusTwo = minusOne; " << minusTwo << " " << minusOne << endl;
        minusOne = answer;
        //cout << " minusOne = answer; " << minusOne << " " << answer << endl;
        answer = minusOne + minusTwo;
        //cout << " answer = minusOne + minusTwo; " << answer << " " << minusOne << " " << minusTwo << endl << endl;
    }
    
    return answer;
}