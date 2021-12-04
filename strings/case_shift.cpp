// program to change case of a string in c++

#include <iostream>
#include <string>

using namespace std;


string toUpperCase(string s){
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i]-=32;
        }
    }
    return s;
}

string toLowerCase(string s){
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i]+=32;
        }
        
    }
    return s;
}

int main(){
    string s;
    getline(cin,s);
    cout<<"UPPER CASE: "<<toUpperCase(s)<<endl;
    cout<<"LOWER CASE: "<<toLowerCase(s)<<endl;
    return 0;
}