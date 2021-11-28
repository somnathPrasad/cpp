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
        cout << "Choose \n1: to exit \n2: print()\n3: pushBack()\n4: isEmpty()\n5: insert()\n6: indexOf()\n7: contains()\n8: prepend()\n9: pop()\n10: deleteAt()\n11: remove()\n12: find()\n13: length\n14: at()\n15: sort()" << endl;
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
            arr.insert(value,index);
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
        else if(command == 8){
            int value;
            cout<<"Value: ";
            cin>>value;
            arr.prepend(value);
        }
        else if(command == 9){
            cout<<arr.pop();
        }
        else if(command == 10){
            int index;
            cout<<"Index: ";
            cin>>index;
            arr.deleteAt(index);
        }
        else if(command == 11){
            int value;
            cout<<"Value: ";
            cin>>value;
            arr.remove(value);
        }
        else if(command == 12){
            int value;
            cout<<"Value: ";
            cin>>value;
            cout<<arr.find(value);
        }
        else if(command == 13){
            cout<<arr.length;
        }
        else if(command == 14){
            int index;
            cout<<"Index: ";
            cin>>index;
            cout<<arr.at(index);
        }
        else if(command == 15){
            arr.sort();
        }
        else
        {
            break;
        }
    }
    
    return 0;
}