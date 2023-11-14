#include <iostream>
using namespace std;

int main()
{
    int a, k;
    cin >> a >> k;
    int arr[101];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int num = 0;
    for(int i = 0; i < a; i++)
    {
        for(int j = i + 1; j < a; j++)
        {
            if((arr[i] + arr[j]) % k == 0)
            {
                num++;
            }
        }
    }
    cout << num;
}
