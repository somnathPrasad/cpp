#include <iostream>
using namespace std;

class EArray
{
public:
    EArray();
    int *arr = new int[size];
    int length;
    int indexOf(int n);
    int at(int n);
    void print();
    void pushBack(int n);
    string isEmpty();
    void putAt(int value,int index);
    bool contains(int n);

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

bool EArray::contains(int n){
    for (int i = 0; i < length; i++)
    {
        if(arr[i]==n){
            return true;
        }
    }
    return false;
}

string EArray::isEmpty(){
    if(length==0){
        return "true";
    }else{
        return "false";
    }
}

void EArray::putAt(int value,int index){
    if(length<=size){
        for (int i = length; i > index; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[index]=value;
        length++;
    }else{
        increaseArraySizeTo(size+1);
        putAt(value,index);
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
    for (int i = 0; i < length; i++)
    {
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
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