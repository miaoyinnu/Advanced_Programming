#include <iostream> // 用于输入输出

using namespace std;

// 定义随机数种子
unsigned int seed = 1;

// 定义随机数生成器函数
unsigned int my_rand()
{

    seed = seed * 1103515245 + 12345;
    // 返回 rand
    return (unsigned int)(seed / 65536) % 32768;
}

int main()
{
    int n;
    cout << "输入数组的长度：";
    cin >> n;

    // 定义数组
    int *arr = new int[n];

    cout << "请输入一个随机数种子（正整数）：";
    cin >> seed;

    // 随机数赋值数组
    cout << "逆置前的数组元素为：";
    for (int i = 0; i < n; i++)
    {
        arr[i] = my_rand() % 100;
        // 生成随机数
        cout << arr[i] << " ";
    }
    cout << endl;

    // 逆置数组元素
    for (int i = 0; i < n / 2; i++)
    {
        // 利用中间变量进行swap
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // 输出逆置后的数组
    cout << "逆置后的数组元素为：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 释放动态分配的内存
    delete[] arr;

    return 0;
}