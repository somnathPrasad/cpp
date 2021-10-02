#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int originaln = n;
    int lastdigit = 0;
    int processednum = 0;
    while (n>0)
    {
        lastdigit = n%10;
        processednum = processednum+ pow(lastdigit,3);
        n = n/10;
    }

    if (processednum == originaln)
    {
        cout<<"This is a armstrong number.";
    }else{
        cout<<"Not a armstrong number.";
    }
    
    
    return 0;
}