#include <iostream>

using namespace std;

void decreasing(int n)
{
    if(n==0){
        return;
    }
    cout<<n<<" ";
    decreasing(n-1);
}

void increasing(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    increasing(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin >> n;
    cout << "numbers in increasing order: ";
    decreasing(n);
    cout<<endl;
    cout<<"numbers in increasing order: ";
    increasing(n);
    return 0;
}