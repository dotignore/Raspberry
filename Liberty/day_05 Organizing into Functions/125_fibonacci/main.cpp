// Листинг Фебоначе
#include<iostream>
using namespace std;

int fib(int n);
// 1,1,2,3,5,8,13,21,34

int main(){
    int n=6, answer;
    //cout << "Enter numbeк fo find: " << endl;
    //cin >> n;
    
    answer = fib(n);
    cout << answer << " is the " << n << "th Fibonecci number\n" << endl;
    
    return 0;
}

int fib(int n){
    
    cout << "Processing fib(" << n << ")...";
    
    if(n<3){
        cout << "Return 1!" << endl;
        return(1);
    }
    else{
        cout << "Call fib \"n-2\"=(" << n-2 << ") and fib \"n-1\"=(" << n-1 << ")" << endl;
        return(fib(n-2)+fib(n-1));
    }
    
}


/*
 #include<iostream>
 using namespace std;
 
 void Rec(int level){
 
 if(level==0)
 return;
 
 cout << "вызов рекурсивной функции " << level << endl;
 Rec(level-1);
 cout << "поднимаемся" << level << endl;
 }
 
 
 int main(){
 Rec(6);
 
 return 0;
 }
 */