#include <iostream>

using namespace std;

int divisible(int limit,int divisior_1,int divisior_2){
    int divisior_1_count=limit/divisior_1;
    int divisior_2_count=limit/divisior_2;
    int both_count = limit/(divisior_1*divisior_2);
    return (divisior_1_count+divisior_2_count)-both_count;
}


int main()
{
    int limit, divisior_1,  divisior_2;
    cin>>limit>>divisior_1>>divisior_2;

    cout<<divisible(limit,divisior_1,divisior_2);

    return 0;
} 