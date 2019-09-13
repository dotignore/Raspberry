// Листинг 10,11
// Возвращение указателя this
#include<iostream>
using namespace std;

class Counter{
public:
    Counter();
    ~Counter(){}
    int GetItsVal() const {return itsVal;}
    void SetInVal(int x){itsVal = x;}
    void Increment() {++itsVal;}
    const Counter & operator++();
private:
    int itsVal;
};

Counter::Counter():itsVal(0){}

const Counter & Counter::operator++(){
    ++itsVal;
    return *this;
}

int main(){
    Counter i;
    cout << "The value of i is " << i.GetItsVal() << endl;
    i.Increment();
    cout << "The value of i is " << i.GetItsVal() << endl;
    ++i;
    cout << "The value of i is " << i.GetItsVal() << endl;
    
    Counter a = ++i;
    cout << "The value of i is a: " << a.GetItsVal() << " and i: " << i.GetItsVal() << endl;
    
    return 0;
}
