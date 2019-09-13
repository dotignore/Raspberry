// Листинг 8.4
// Выделение, использование и освобождение динамической памяти
#include<iostream>
using namespace std;

int main(){
    int Variable = 5;
    int * Address = & Variable;
    int * pOinter;
    
    pOinter = new int;
    * pOinter = 7;
    cout << "Variable " << Variable << endl;
    cout << "Address " << *Address << endl;
    cout << "pOinter " << *pOinter << endl;
    delete pOinter;
    
    pOinter = new int;
    * pOinter = 9;
    cout << "Variable " << Variable << endl;
    cout << "Address " << *Address << endl;
    cout << "pOinter " << *pOinter << endl;
    delete pOinter;

    return 0;
}


/*
// Листинг 8.4
// Выделение, использование и освобождение динамической памяти
#include<iostream>
using namespace std;

int main(){
        int localVariable = 5;                                      //     0x7fff5fbff6e8 <- 5
        int * pLocal = &localVariable;                              // (5) 0x7fff5fbff6e0 <- 0x7fff5fbff6e8
        //int * pHeap = new int;
        int * pHeap;                                                // 0x7fff5fbff700
    
    cout << "localVariable: " << localVariable << endl;             // 5
    cout << "&localVariable: " << &localVariable << endl << endl;   // 0x7fff5fbff6e8
    
    cout << "pLocal: " << pLocal << endl;                           // 0x7fff5fbff6e8
    cout << "&pLocal: " << &pLocal << endl;                         // 0x7fff5fbff6e0
    cout << "*pLocal: " << *pLocal << endl << endl;                 // 5
    
    cout << "&pHeap: " << &pHeap << endl << endl;                   // 0x7fff5fbff6d8
    
    pHeap = new int;
    *pHeap =7;
    cout << "pHeap: " << pHeap << endl;                             // 0x1001000e0 <== 0x7fff5fbff700
    cout << "&pHeap: " << &pHeap << endl;                           // 0x7fff5fbff6d8
    cout << "*pHeap: " << *pHeap << endl << endl;                   // 7
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    

    cout << "localVariable: " << localVariable << endl;             // 5
    cout << "*pLocal: " << *pLocal << endl;                         // 5
    cout << "pLocal: " << pLocal << endl;                           // 0x7fff5fbff6e0
    cout << "*pHeap: " << *pHeap << endl;                           // 7
    cout << "pHeap: " << pHeap << endl << endl;                     // 0x1001000e0
    delete pHeap;
    
    pHeap = new int;
    *pHeap = 9;
    cout << "*pHeap: " << *pHeap << endl;                           // 9
    delete pHeap;
    
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "pHeap: " << pHeap << endl;                             // 0x1001000e0
    cout << "&pHeap: " << &pHeap << endl;                           // 0x7fff5fbff6d8
    cout << "*pHeap: " << *pHeap << endl << endl;                   // 9
    
    return 0;
}
*/