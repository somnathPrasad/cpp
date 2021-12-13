#include <iostream>
#include <string>

using namespace std;

void reverse(string str,int i=0){
    if(i==str.length()-1){
        cout<<str[i];
        return;
    }
    reverse(str,i+1);
    cout<<str[i];
}

int main()
{
    string str;
    cin>>str;
    reverse(str);
    return 0;
}