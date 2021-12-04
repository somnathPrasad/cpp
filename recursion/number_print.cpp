#include <iostream>

using namespace std;

void printDec(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << " ";
        printDec(n - 1);
    }
}

void printInc(int n){
    if(n==0){
        return;
    }
    printInc(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin >> n;
    cout<<"print in decreasing order using recurrsion: ";
    printDec(n);
    cout<<endl;
    cout<<"print in increasing order using recurrsion: ";
    printInc(n);
    return 0;
}