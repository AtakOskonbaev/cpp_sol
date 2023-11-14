#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[100];
    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int max = -101;
    int min = 101;
    for(int i = 0; i < a; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << max - min;
}