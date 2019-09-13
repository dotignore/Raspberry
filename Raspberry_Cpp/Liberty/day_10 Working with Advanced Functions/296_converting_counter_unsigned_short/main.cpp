// Листинг 10,18
#include<iostream>
using namespace std;

class Counter{
public:
    Counter();
    Counter(int val);
    ~Counter(){}
    operator unsigned short();
private:
    int itsVal;
};

Counter::Counter():itsVal(0){}              // значение по умолчанию при создании

Counter::Counter(int val):itsVal(val){}     // сюда itsVal(val) заносим значение ctr(5) .... itsVal=5 (Counter ctr(5);)

Counter::operator unsigned short(){         // int theShort = ctr;
    return (int (itsVal));
}

int main(){
    Counter ctr(5);
    int theShort = ctr;
    cout << "theShort: " << theShort << endl;
    
    return 0;
}