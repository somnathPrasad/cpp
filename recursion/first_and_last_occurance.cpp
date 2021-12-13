#include <iostream>

using namespace std;

int lastocc(int arr[], int n, int key)
{
    if (n >= 0)
    {
        if (arr[n] == key)
        {
            return n;
        }
        else
        {
            return lastocc(arr, n - 1, key);
        }
    }
    else
    {
        return -1;
    }
}

int firstocc(int arr[], int n, int key)
{
    if (n == 0)
    {
        if (arr[n] == key)
        {
            return n;
        }
        else
        {
            return -1;
        }
    }
    if (firstocc(arr, n - 1, key) > -1)
    {
        return firstocc(arr,n-1,key);
    }
    else
    {
        if (arr[n] == key)
        {
            return n;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << "first occurance: " << firstocc(arr, n, key) << endl;
    cout << "last occurance: " << lastocc(arr, n, key);
    return 0;
}