#include <iostream>
using namespace std;

void sort(int* arr, int n)
{
    for (int* i = arr; i < arr + n - 1; ++i)
        for (int* j = arr + n - 1; j > i; --j)
            if (*(j - 1) > *j)
                swap(*j, *(j - 1));
}

int main()
{
    int n;
    cout << "请输入元素个数：";
    if (!(cin >> n) || n <= 0) return 0;
    int* p = new int[n];
    cout << "请输入 " << n << " 个整数：";
    for (int* q = p; q < p + n; ++q) cin >> *q;
    sort(p, n);
    cout << "排序后结果：";
    for (int* q = p; q < p + n; ++q) cout << *q << ' ';
    cout << endl;
    delete[] p;
    return 0;
}