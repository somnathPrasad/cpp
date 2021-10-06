// WAP to find if a number is armstrong or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Example: 153 = (1)^3 * (5)^3 * (3)^3
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