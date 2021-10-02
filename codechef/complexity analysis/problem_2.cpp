#include <iostream>

using namespace std;

// Reverse The Number
//Given an Integer N, write a program to reverse it.

int main(){
    int test_case;
    cin>>test_case;
    int num[test_case];
    for (int i = 0; i < test_case; i++)
    {
        cin>>num[i];
    }
    for (int i = 0; i < test_case; i++)
    {
        int reverse_num = 0;
        while(num[i]>0){
        int last_num = num[i]%10;
        reverse_num = reverse_num*10 + last_num;
        num[i] = num[i]/10;
        }
        cout<<reverse_num<<endl;
    }
    
    
    return 0;
}