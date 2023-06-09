#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <time.h>
using namespace std;

const int N = 100010;
int a[N];
void quick_sort(int l, int r)
{
    if (l >= r) return;
    int mid = a[(l + r) >> 1];
    int i = l - 1, j = r + 1;
    while (i < j)
    {
        do i ++ ; while (a[i] < mid);
        do j -- ; while (a[j] > mid);
        if (i < j) swap(a[i], a[j]);
    }

    quick_sort(l, j);
    quick_sort(j + 1, r);
}

int main()
{
    int n = 10;

    srand(time(NULL));
    for (int i = 0; i < n; ++ i)
        a[i] = rand();
    quick_sort(0, n - 1);
    for (int i = 0; i < n; ++ i)
        cout << a[i] << " ";
    cout << endl;
    cout << "Hello World1" << endl;
    return 0;
}