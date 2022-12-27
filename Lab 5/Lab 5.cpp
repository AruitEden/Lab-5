


#include <iostream>
using namespace std;


int min( int arr[], int min)
{
    min = arr[0];
    for (int i = 1; i < 3; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << min;
    cout << endl;
    return min;
}

int max(int arr[], int max)
{
    max = arr[0];
    for (int i = 1; i < 3; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;
    cout << endl;
    return max;
}

int main()
{
    int v1[3] = { 4, 1, 3 };
    int v2[3] = { 8, 6, 1 };
    int v3[3] = { -1, 9, 7 };
    int mini[3] = {};
    

    int min1 = v1[0];
    int min2 = v2[0];
    int min3 = v3[0];

    cout << "Minimum value v1: ";
    min1 = min(v1, min1);
    mini[0] = min1;

    cout << "Minimum value v2: ";
    min2 = min(v2, min2);
    mini[1] = min2;

    cout << "Minimum value v3: ";
    min3 = min(v3, min3);
    mini[2] = min3;

    cout << endl;

    cout << "Minimum value: ";
    for (int i = 0; i < 3; i++)
    {
        cout << mini[i] << "  ";
    }
    cout << endl;

    cout << "Minimum maxmum value: ";
    int minMax = mini[0];
    minMax = max(mini, minMax);

    cout << "Minimum mnimum value: ";
    int minMin = mini[0];
    minMin = min(mini, minMin);

    cout << endl;

    int Sum = 0;

    if (minMax == mini[0] && minMin == mini[1] || minMax == mini[1] && minMin == mini[0])
    {
        cout << "v1*v2 = " << v1[0] << "*" << v2[0] << " + " << v1[1] << "*" << v2[1] << " + "  << v1[2] << "*" << v2[2];
        cout << endl;
        Sum = v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
    }
    
    else if (minMax == mini[2] && minMin == mini[3] || minMax == mini[3] && minMin == mini[2])
    {
        cout << "v2*v3 = " << v2[0] << "*" << v3[0] << " + " << v2[1] << "*" << v3[1] << " + " << v2[2] << "*" << v3[2];
        cout << endl;
        Sum = v2[0] * v3[0] + v2[1] * v3[1] + v2[2] * v3[2];
    }

    else
    {
        cout << "v1*v3 = " << v1[0] << "*" << v3[0] << " + " << v3[1] << "*" << v3[1] << " + " << v3[2] << "*" << v3[2];
        cout << endl;
        Sum = v1[0] * v3[0] + v1[1] * v3[1] + v1[2] * v3[2];
    }
   
    cout<< "Scalar product: " << Sum;
    cout << endl;
}



/*
Test1
    int v1[3] = { 2, 1, 3 };
    int v2[3] = { 0, -2, 0};
    int v3[3] = { 0, 0, 0};

    v1*v2
    Sum = -2
*/

/*
Test2
    int v1[3] = { 4, 1, 3 };
    int v2[3] = { 8, 6, 1};
    int v3[3] = { -1, 9, 7};
*/