/* 
QUESTION:
WAP to take input from user and print the number in reverse.
*/
#include <iostream>

using namespace std;

int main(){

    int n;

    cin>>n; //user input number

    int reverseNum = 0;

    while (n>0)
    {
        int lastdigit = n % 10;

        reverseNum = reverseNum*10 + lastdigit;

        n = n/10;
    }

    cout<<reverseNum;

    return 0;
}