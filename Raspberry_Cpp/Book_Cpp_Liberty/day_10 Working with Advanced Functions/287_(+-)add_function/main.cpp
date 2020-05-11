#include<iostream>
using namespace std;

class Counter{
public:
    Counter();
    Counter(int intialValue);
    ~Counter(){}
    
    int GetItsVal() const {return itsVal;}
    void SetItsVal(int x){itsVal = x;}
    
    Counter Add1(const Counter & rhs);
private:
    int itsVal;
};

Counter::Counter():itsVal(0){
}

Counter::Counter(int intialValue):itsVal(intialValue){
}

Counter Counter::Add1(const Counter & rhs){
    return Counter(itsVal + rhs.GetItsVal());
}

int main(){
    Counter varOne(2);
    Counter varTwo(5);
    Counter varThree;
    varThree = varOne.Add1(varTwo);
    
    cout << "vatOne: " << varOne.GetItsVal() << endl;
    cout << "vatTwo: " << varTwo.GetItsVal() << endl;
    cout << "vatThree: " << varThree.GetItsVal() << endl;
    
    return 0;
}


/*

 // Листинг 10,13
// Функция add
#include<iostream>
using namespace std;

class Counter{
public:
    Counter();
    Counter(int initialValue);
    ~Counter(){}
    
    int GetItsVal() const {return itsVal;}
    void SetItsVal(int x){itsVal = x;}
    
    Counter Add(const Counter &);
private:
    int itsVal;
};

Counter::Counter(int initialValue):itsVal(initialValue){}

Counter::Counter():itsVal(0){}

Counter Counter::Add(const Counter & rhs){
    return Counter(itsVal+ rhs.GetItsVal());
}

int main(){
    //Counter varOne(2), varTwo(4), varThree;
    Counter varOne(2);
    Counter varTwo(4);
    Counter varThree;
    varThree = varOne.Add(varTwo);
    
    cout << "vatOne: " << varOne.GetItsVal() << endl;
    cout << "vatTwo: " << varTwo.GetItsVal() << endl;
    cout << "vatThree: " << varThree.GetItsVal() << endl;
    
    return 0;
}

*/