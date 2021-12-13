#include <iostream>

using namespace std;

int power(int n,int pow){
    if(pow==1){
        return n;
    }
    int rest = power(n,pow-1);
    return n*rest;
}

int main()
{
    int n,pow;
    cin>>n>>pow;
    cout<<power(n,pow);
    return 0;
}