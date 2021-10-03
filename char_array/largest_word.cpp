/*
QUESTION:
Wap to find the largest word in a given sentence.
*/
#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;

    char arr[n+1];

    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();

    int count = 0;
    int maxcount = 0;
    int end_index=0; //store ending index of the largest word.

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i]==' '){
            count=0;
        }else{
            count++;
        }
        if(count>maxcount){
            maxcount = count;
            end_index = i;
        }
    }

// display the largest word.
    for (int i = end_index-count; i < end_index+1; i++)
    {
        cout<<arr[i];
    }

    return 0;
}