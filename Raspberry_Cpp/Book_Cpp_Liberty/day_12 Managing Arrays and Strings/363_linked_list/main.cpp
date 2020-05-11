// ***********************************************
// Листинг 12,13
//
// ЦЕЛЬ: Показать использование связанного писка
// ПРИМЕЧАНИЯ:
//
// Показан один из подходов ООП
// по созданию списков
// Список распределяет задачи между узлами,
// представляющими между собой абстрактные типы данных
// Список состоит из трёх узлов:  головного,
// хвостового и промежуточного. Данные содержит
// только промежуточный узел.
// Все объекты, используемые в списке, относятся
// к классу Data.
//
// ***********************************************
#include <iostream>
using namespace std;
enum { kIsSmaller, kIsLarger, kIsSame};

// Связанный список основывается на объектах класса Data
// Любой класс в связанном списке должен поддерживать два метода:
// Show (отображение значения) и Compare (возвращение относительной позиции узла)
class Data{
public:
    Data(int val):myValue(val){}
    ~Data(){}
    int Compare(const Data &);
    void Show() { std::cout << myValue << std::endl; }
private:
    int myValue;
};

// Сравнение используется для определения
// позиции в списке для новго узла
int Data::Compare(const Data & theOtherData){
    if (myValue < theOtherData.myValue)
        return kIsSmaller;
    if (myValue > theOtherData.myValue)
        return kIsLarger;
    else
        return kIsSame;
}

// Объявления
class Node;
class HeadNode;
class TailNode;
class InternalNode;

// ADT-представление узлов объекта списка
// В каждом производном классе должны быть замещены функции Insert и Ырщц
class Node
{
public:
    Node(){}
    virtual ~Node(){}
    virtual Node * Insert(Data * theData)=0;
    virtual void Show() = 0;
private:
};

// Этот узел поддерживает реальные объекты
// В данном случае объект имеет тип  Data
// О другом более общем методе решения этой
// задачи мы узнаем при рассмотрении шаблонов
class InternalNode: public Node
{
public:
    InternalNode(Data * theData, Node * next);
    virtual ~InternalNode(){ delete myNext; delete myData; }
    virtual Node * Insert(Data * theData);
    virtual void Show()
    { myData->Show(); myNext->Show(); } // делегирование
    
private:
    Data * myData;  // данные списка
    Node * myNext;    // указатель на следующий узел в связанном списке
};

// Инициализация выполняемая каждым конструктором
InternalNode::InternalNode(Data * theData, Node * next):
myData(theData),myNext(next)
{
}

// Сущьность списка
// Когда в список передаётся новый объект
// программа определяет позицию в списке
// для новго узда
Node * InternalNode::Insert(Data * theData)
{
    
    // Этот новенький больше или меньше чем я?
    int result = myData->Compare(*theData);
    
    
    switch(result)
    {
            // По соглашению если он такой же как я то он идёт первым
        case kIsSame:      // условие выполняется
        case kIsLarger:    // новые данные вводятся перед моим
        {
            InternalNode * dataNode =
            new InternalNode(theData, this);
            return dataNode;
        }
            
            // Он больше чем я поэтому передаётся в
            // следующий узел и пусть тот делает с этими данными всё что захочет
        case kIsSmaller:
            myNext = myNext->Insert(theData);
            return this;
    }
    return this;  // появляется MSC
}


// Хвостовой узел выполняет роль часового
class TailNode : public Node
{
public:
    TailNode(){}
    virtual ~TailNode(){}
    virtual Node * Insert(Data * theData);
    virtual void Show() { }
private:
};

// Если данные подходят для меня то они должны быть вставлены передомной
// так как я хвост и НИЧЕГО не может быть после меня
Node * TailNode::Insert(Data * theData)
{
    InternalNode * dataNode = new InternalNode(theData, this);
    return dataNode;
}

// головной узел не содержит данных он только
// указывает на начало списка
class HeadNode : public Node
{
public:
    HeadNode();
    virtual ~HeadNode() { delete myNext; }
    virtual Node * Insert(Data * theData);
    virtual void Show() { myNext->Show(); }
private:
    Node * myNext;
};

// как только создаётся головной узел
// он создаёт хвост
HeadNode::HeadNode()
{
    myNext = new TailNode;
}

// Ничего не может быть перед головой поэтому
// любые данные передаются в следующий узел
Node * HeadNode::Insert(Data * theData)
{
    myNext = myNext->Insert(theData);
    return this;
}

// Я только распределяю задачи между узлами
class LinkedList
{
public:
    LinkedList();
    ~LinkedList() { delete myHead; }
    void Insert(Data * theData);
    void ShowAll() { myHead->Show(); }
private:
    HeadNode * myHead;
};

// Список появляется с созданием головного узла
// который сразу создаёт хвостовой узел
// Таким образом пустой список содржит указатель на головной узел
// указатель в сою очередь на хвостовой узел между которыми пока ничего
LinkedList::LinkedList()
{
    myHead = new HeadNode;
}

// Делегирование делегирование делегирование
void LinkedList::Insert(Data * pData)
{
    myHead->Insert(pData);
}

// выполняемая тестовая программа
int main()
{
    Data * pData;
    int val;
    LinkedList ll;
    
    // предлагает пользователю ввести значение
    // которое передаётся в список
    for (;;)
    {
        std::cout << "What value? (0 to stop): ";
        std::cin >> val;
        if (!val)
            break;
        pData = new Data(val);
        ll.Insert(pData);
    }
    
    // теперь пройдёмся по списку и посмотрим значения
    ll.ShowAll();
    return 0;  // ll выходим за установленные рамки и поэтому удалено
}