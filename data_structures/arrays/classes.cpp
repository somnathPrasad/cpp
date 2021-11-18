#include <iostream>
using namespace std;

class EArray
{
public:
    EArray();
    ~EArray();
    int *arr = new int[size];
    int length;
    int indexOf(int n);
    int at(int n);
    void print();
    void pushBack(int n);
    string isEmpty();

private:
    int size;
    void increaseArraySizeTo(int n);
};

EArray::EArray()
{
    length = 0;
    size = 5;
    arr[0] = 1;
}
EArray::~EArray(){
    delete[] arr;
}

string EArray::isEmpty(){
    if(length==0){
        return "true";
    }else{
        return "false";
    }
}

void EArray::print(){
    cout << "Array containes: [";
    for (int i = 0; i < length; i++)
    {
        i == length - 1 ? cout << arr[i] : cout << arr[i] << ","<< " ";
    }
    cout << "]" << endl;
    
}

void EArray::increaseArraySizeTo(int n)
{
    int *temparr = new int[n];
    for (int i = 0; i < size; i++)
    {
        temparr[i] = arr[i];
    }
    delete[] arr;
    size = n;
    arr = temparr;
}

int EArray::indexOf(int n)
{
    return 2;
}

int EArray::at(int n)
{
    return arr[n];
}

void EArray::pushBack(int n)
{
    if (length == size)
    {
        increaseArraySizeTo(size*2);
        pushBack(n);
    }
    else
    {
        arr[length] = n;
        length++;
    }
}





int main()
{
    EArray arr;
    while (true)
    {
        int command;
        cout << endl;
        cout << "Enter \n1: to display the array\n2: to add more items\n3: to check if the array is empty\n4: to exit" << endl;
        cin >> command;
        if (command == 1)
        {
            arr.print();
        }
        else if (command == 2)
        {
            int value;
            cout<<"Value: ";
            cin>>value;
            arr.pushBack(value);
        }
        else if(command == 3){
            cout<<arr.isEmpty();
        }
        else
        {
            break;
        }
    }
    
    return 0;
}