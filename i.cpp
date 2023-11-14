#include <iostream>
using namespace std;

void reverse(int a, int arr[])
{
    for (int i = 0; i < a / 2; i++)
        swap(arr[i], arr[a - i - 1]);
    for (int i = 0; i < a; i++)
        cout << arr[i] << " ";
}
int main()
{
    int a;
    cin >> a;
    int arr[100];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    reverse(a, arr);
}