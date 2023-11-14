#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[100];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int max = -100;
    int maxnum;
    for (int i = 0; i < a; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
            maxnum = i;
        }
    }
    int swap;
    swap = arr[maxnum];
    arr[maxnum] = arr[a - 1];
    arr[a - 1] = swap;

    for (int i = 0; i < a; i++)
        cout << arr[i] << " ";
}