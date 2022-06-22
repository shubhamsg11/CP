#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[1000] = {0};
    int j = 1;
    for (int i = 0; i < 1000; i++)
    {
        while (j % 3 == 0 || j % 10 == 3)
            j++;

        if (j % 3 != 0 || j % 10 != 3)
        {
            a[i] = j;
            j++;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << a[k - 1] << endl;
    }
}