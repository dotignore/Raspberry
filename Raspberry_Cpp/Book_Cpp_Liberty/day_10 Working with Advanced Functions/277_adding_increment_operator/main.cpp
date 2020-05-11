// Листинг 10,7
// Добавление в класс Counter оператора инкремента
#include<iostream>
using namespace std;

class Counter{
public:
    Counter();
    ~Counter(){}
    int GetItsVal() const{return itsVal;}
    void SetItsVal(int x){itsVal = x;}
    void Increment(){++itsVal;}
private:
    int itsVal;
};

Counter::Counter():itsVal(0){}

int main(){
    Counter i;
    cout << "The Value of i is " << i.GetItsVal() << endl;
    i.Increment();
    cout << "The Value of i is " << i.GetItsVal() << endl;
    
    return 0;
}