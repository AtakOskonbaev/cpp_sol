#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[100];
    for(int i = 0; i < a; i++)
    {
        int j;
        cin >> j;
        arr[i] = j;
    }
    for(int i = 0; i < a - 1; i++)
    {
        if((arr[i] > 0 && arr[i + 1] > 0) || (arr[i] < 0 && arr[i + 1] < 0))
        {
            cout << arr[i] << " " << arr[i + 1] << endl;
        }
    }
}