#include <bits/stdc++.h>

using namespace std;

bool checkBoring(long long int num,long long int length){
    bool flag = false;
    do {
        int digit = num%10;
        if(length%2 == 0 && digit%2 != 0){
            return false;
        }else if(length%2 != 0 && digit%2 == 0){
            return false;
        }else{
            flag = true;
        }
        --length;
        num /= 10;
    } while (num);
    return flag;
}

int numberOfDigits(long long int num){
    unsigned int number_of_digits = 0;
    do {
        ++number_of_digits; 
        num /= 10;
    } while (num);
    return number_of_digits;
}

int main(){
    int t;
    cin>>t;
    int testcase = 0;
    while(t--){
    ++testcase;
    long long int l,r;
    cin>>l>>r;
    long long int count=0;
    for (long long int i = l; i <= r; i++)
    {
        int length = numberOfDigits(i);
        if(checkBoring(i,length)){
            count++;
        }
    }
    cout<<"Case #"<<testcase<<": " <<count;
    cout<<"\n";
    };
    return 0;
}