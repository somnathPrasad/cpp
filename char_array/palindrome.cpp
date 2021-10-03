#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool isPalindrome = true;
    for (int i = 0; i < n/2; i++)
    {
        if(a[i]!=a[n-i-1]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}