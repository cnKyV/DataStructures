#include <iostream>

using namespace std;


 int originVal = 0;
 int* originPoint = &originVal;
 int* currentPoint = &originVal;

void saveToAddress(int value)
{

    while(true)
    {
        if (*currentPoint == 0)
        {
            *currentPoint = value;
            currentPoint += 1;
            *currentPoint = 0;
            break;
        }
    }

}

void removeFromLast()
{
    currentPoint -= 1;

    int* nextPtr = currentPoint+1;
    nextPtr = nullptr;

}

void removeFromOrigin()
{
    originPoint+=1;
    int* previousPtr = originPoint-1;
    previousPtr = nullptr;

}



void listAllInt()
{
    for (int* i = originPoint; i < currentPoint; ++i)
        cout<<"PTR: "<<i<<" VAL: "<<*i<<endl;
}


int main() {

    saveToAddress(5);
    saveToAddress(3);
    saveToAddress(2);
    saveToAddress(1);
    removeFromLast();
    removeFromOrigin();
    listAllInt();

//int a = 5;
//int* ptr = &a;
//
//cout<<"ptr: "<<ptr<< " addr: "<<&ptr<<endl;
//cout<<"ptr+1:"<< ptr+1<<" addr+1:" << &ptr+1<<endl;
//cout<<*ptr+10<<endl;
    return 0;
}
