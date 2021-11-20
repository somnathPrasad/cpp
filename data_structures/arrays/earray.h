#include <iostream>
#include <exception>
using namespace std;



class Exception : public std::exception
{
    std::string _msg;
public:
    Exception(const std::string& msg) : _msg(msg){}

    virtual const char* what() const noexcept override
    {
        return _msg.c_str();
    }
};

class EArray
{
public:
    EArray();
    ~EArray();
    int *arr = new int[size];
    int length;
    int indexOf(int item);
    int at(int index);
    void print();
    void pushBack(int n);
    int isEmpty();
    void insert(int value,int index);
    bool contains(int n);
    void prepend(int n);
    int pop();
    void deleteAt(int index);
    void remove(int item);
    int find(int item);

private:
    int size;
    void resize(int n);
};

EArray::EArray()
{
    length = 0;
    size = 5;
    arr[0] = 1;
}
EArray::~EArray()
{
    delete[] arr;
}

int EArray::find(int item){
    for (int i = 0; i < length; i++)
    {
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}

void EArray::remove(int item){
    deleteAt(indexOf(item));
}

void EArray::deleteAt(int index){
    if(index>length-1){
        throw Exception("index out of range");
    }else{
        for (int i = index; i < length-1; i++)
        {
            arr[i]=arr[i+1];
        }
        arr[length-1]=0;
        length--;
    }
}

int EArray::pop(){
    if(length==0){
        throw Exception("array is empty");
    }else{
        int pop_value = arr[length-1];
        arr[length-1]=0;
        length--;
        if(length<size/4){
            resize(size/2);
        }
        return pop_value;
    }
}

void EArray::prepend(int n){
    insert(n,0);
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

int EArray::isEmpty(){
    if(length==0){
        return 1;
    }else{
        return -1;
    }
}

void EArray::insert(int value,int index){
    if(index>length-1){
        throw Exception("Index out of range.");
    }else{
        if(length<size){
            for (int i = length; i > index; i--)
            {
                arr[i]=arr[i-1];
            }
            arr[index]=value;
            length++;
        }else{
            resize(size+1);
            insert(value,index);
        }
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

void EArray::resize(int n)
{
    int *temparr = new int[n];
    for (int i = 0; i < length; i++)
    {
        temparr[i] = arr[i];
    }
    delete[] arr;
    size = n;
    arr = temparr;
}

int EArray::indexOf(int item)
{
    for (int i = 0; i < length; i++)
    {
        if(arr[i]==item){
            return i;
        }
    }
    throw Exception("Item not found");
}

int EArray::at(int index)
{
    if(index<length){
        return arr[index];
    }else{
        throw Exception("index out of range");
    }
}

void EArray::pushBack(int n)
{
    if (length == size)
    {
        resize(size*2);
        pushBack(n);
    }
    else
    {
        arr[length] = n;
        length++;
    }
}