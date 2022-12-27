#include <iostream>
using namespace std;


void min(const int n, int arr[], int min)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << min;
    cout << endl;
}

int main()
{
    const int n = 3;
    int v1[n] = { 2, 1, 0 };
    int v2[n] = { -2, 0, 0 };
    int v3[n] = { 0, 0, 0 };
    int mini[n] = {};


    int min1 = 0;
    int min2 = 0;
    int min3 = 0;

    min(n, v1, min1);
    min(n, v2, min2);
    min(n, v3, min3);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            m
        }
    }


    for (int i = 0; i < n; i++)
    {
        cout << mini[i] << "  ";
    }
    cout << endl;

    /* for (int i = 1; i < n; i++)
 {
     if (v1[i] < min1)
         min1 = v1[i];
 }
 cout << min1;
 cout << endl;*/
}


