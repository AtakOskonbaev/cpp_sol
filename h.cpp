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
    for (int i = 1; i < a; i += 2)
    {
        int swapper;
        swapper = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = swapper;
    }
    for (int i = 0; i < a; i++)
        cout << arr[i] << " ";
}