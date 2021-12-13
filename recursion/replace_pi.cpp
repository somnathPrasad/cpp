#include <iostream>
#include <string>

using namespace std;

void replace_pi(string str, int i = 0)
{
    if(i==str.length()){
        return;
    }
    if(str[i]=='p'&&str[i+1]=='i'){
        cout<<"3.14";
        replace_pi(str,i+2);
    }else{
        cout<<str[i];
        replace_pi(str,i+1);
    }
}

int main()
{
    string str;
    getline(cin, str);
    replace_pi(str);
    // cout<<endl;
    // cout<<str;
    return 0;
}