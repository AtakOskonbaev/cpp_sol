#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a;
    cin >> a;
    double arr[100];
    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    double max = 0;
    for(int i = 0; i < a; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] *= -1;
        }
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%.2f", max);
}