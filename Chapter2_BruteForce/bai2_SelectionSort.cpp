#include <bits/stdc++.h>

using namespace std;
int n;


void SelectionSort_decrease(int a[], int n)
{
    for (int i = 0; i < n-1; ++i)
    {
        int key = i;
        for (int j = i+1; j < n; ++j)
            if (a[j] > a[key])
                key = j;
        swap(a[key], a[i]);
    }
}

void show(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << a[i] << ' ';
    cout << '\n';
}

int main()
{
    clock_t st, en;
    int a[] = {-10, 89, 87, 45, 28, -8, 6, 9};
    int n = sizeof(a)/sizeof(int);
    cout << "Mang chua sap xep: ";
    show(a, n);
    cout << "Mang sap xep giam dan:";
    SelectionSort_decrease(a, n);
    show(a, n);
    return 0;
}
