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
    /**
     * @brief number of item in the array.
     * 
     */
    int length;
    int indexOf(int item);
    int at(int index);
    void print();
    void pushBack(int n);
    int isEmpty();
    void insert(int value,int index);
    bool contains(int n);
    void prepend(int item);
    int pop();
    void deleteAt(int index);
    void remove(int item);
    int find(int item);

private:
    /**
     * @brief actual size of the array.
     * 
     */
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
/**
 * @brief Find if a item is present inside the array or not.
 * 
 * @param item 
 * @return The index of the item if found else returns -1.
 */
int EArray::find(int item){
    for (int i = 0; i < length; i++)
    {
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}

/**
 * @brief removes the first matching item.
 * 
 * @param item 
 */
void EArray::remove(int item){
    deleteAt(indexOf(item));
}
/**
 * @brief Deletes the item present at the index
 * 
 * @param index index of the item
 */
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
/**
 * @brief remove item from the end of the array.
 * 
 * @return the item removed.
 */
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
/**
 * @brief Append a new item at the 0th position in the array.
 * 
 * @param item item to append at 0th position.
 */
void EArray::prepend(int item){
    insert(item,0);
}
/**
 * @brief Check if the item is present in the array or not
 * 
 * @param item 
 * @return true if item is present
 * @return false if item is not present
 */
bool EArray::contains(int item){
    for (int i = 0; i < length; i++)
    {
        if(arr[i]==item){
            return true;
        }
    }
    return false;
}
/**
 * @brief check if the array is empty.
 * 
 * @return 1 if the array is empty else -1.
 */
int EArray::isEmpty(){
    if(length==0){
        return 1;
    }else{
        return -1;
    }
}
/**
 * @brief insert a new item at any index.
 * 
 * @param value item to be inserted.
 * @param index index of item.
 */
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
/**
 * @brief print the whole array.
 * 
 */
void EArray::print(){
    cout << "Array containes: [";
    for (int i = 0; i < length; i++)
    {
        i == length - 1 ? cout << arr[i] : cout << arr[i] << ","<< " ";
    }
    cout << "]" << endl;
    
}
/**
 * @brief resize the array.
 * 
 * @param n new size
 */
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


    /**
     * @brief Return the index of the given item if present in the array.
     * 
     * @param item item in the array.
     * @return int index
     */
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
/**
 * @brief Access items from the array.
 * 
 * @param index 
 * @return integer at the index.
 */
int EArray::at(int index)
{
    if(index<length){
        return arr[index];
    }else{
        throw Exception("index out of range");
    }
}
/**
 * @brief add a new item in the end of the array.
 * 
 * @param n item to be inserted
 */
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