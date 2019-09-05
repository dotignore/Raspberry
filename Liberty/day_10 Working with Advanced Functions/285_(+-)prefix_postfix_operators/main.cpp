// Листинг 10,12
// Возвращение разыменованого указателя this
#include<iostream>
using namespace std;

class Counter{
public:
    Counter();
    ~Counter(){}
    int GetItsVal() const {return itsVal;}
    void SetItsVal(int x){itsVal = x;}
    const Counter & operator++();                 // оператор преинкремента
    const Counter operator++(int);              // оператор постинкремента
private:
    int itsVal;
};

Counter::Counter(): itsVal(0){}

const Counter & Counter::operator++(){
    ++itsVal;
    return * this;
}

const Counter Counter::operator++(int x){
    Counter temp(*this);
    ++itsVal;
    return temp;
}

int main(){
    Counter i;
    cout << "The value of i is " << i.GetItsVal() << endl;
    i++;
    cout << "The value of i is " << i.GetItsVal() << endl;
    ++i;
    cout << "The value of i is " << i.GetItsVal() << endl;
    
    Counter a =++i;
    cout << "The value of a: " << a.GetItsVal() << " and i: " << i.GetItsVal() << endl;
    a =i++;
    cout << "The value of a: " << a.GetItsVal() << " and i: " << i.GetItsVal() << endl;
    
    return 0;
}
