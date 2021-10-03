#include <iostream>

using namespace std;

int getBit(int n,int pos){
    return((n & (1<<pos)) != 0);
}

int setBit(int n,int pos){
    return(n | (1<<pos));
}

int clearBit(int n,int pos){
    return n & (~(1<<pos));
}

int updateBit(int n, int pos, int value){
    n = n & (~(1<<pos));
    return (n | (value<<pos));
}

int main()
{   
    cout<<"get bit: "<<getBit(5,2)<<endl;
    cout<<"set bit: "<<setBit(5,1)<<endl;
    cout<<"clear bit: "<<clearBit(5,2)<<endl;
    cout<<"update bit: "<<updateBit(5,1,1)<<endl;
    return 0;
}