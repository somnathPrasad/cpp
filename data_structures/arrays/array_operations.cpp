#include <iostream>
#include "earray.h"
using namespace std;

int main()
{
    EArray arr;
    while (true)
    {
        int command;
        cout << endl;
        cout << "Choose \n1: to exit \n2: print()\n3: pushBack()\n4: isEmpty()\n5: putAt()\n6: indexOf()\n7: contains()" << endl;
        cin >> command;

        if(command == 1){
            break;
        }
        else if (command == 2)
        {
            arr.print();
        }
        else if (command == 3)
        {
            int value;
            cout<<"Value: ";
            cin>>value;
            arr.pushBack(value);
        }
        else if(command == 4){
            cout<<arr.isEmpty();
        }
        else if(command == 5){
            int value;
            cout<<"Value: ";
            cin>>value;
            int index;
            cout<<"Index: ";
            cin>>index;
            arr.putAt(value,index);
        }
        else if(command == 6){
            int value;
            cout<<"Value: ";
            cin>>value;
            cout<<arr.indexOf(value);
        }
        else if(command == 7){
            int value;
            cout<<"Value: ";
            cin>>value;
            cout<<arr.contains(value);
        }
        else
        {
            break;
        }
    }
    
    return 0;
}