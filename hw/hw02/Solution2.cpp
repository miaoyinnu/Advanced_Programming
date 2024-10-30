#include <iostream>
using namespace std;

// 使用指针逆序排列数组函数
void reverseArray(int *arr, int size) {
    // 定义指针
    int *left = arr;
    int *right = arr + size - 1;

    // 双指针遍历交换
    while (left < right) {
        // 交换元素

        int temp = *left;
        *left = *right;
        *right = temp;

        // 左指针右移
        left++;
        // 右指针左移
        right--;
    }
}

int main() {
    // 定义最大长度
    const int SIZE = 10;
    // 定义函数
    int numbers[SIZE];

    // 随机输入10个整数
    cout << "输入10个整数：" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // 调用函数输出答案
    reverseArray(numbers, SIZE);

    // 输出答案
    cout << "逆序后的数组：" << endl;
    // 遍历输出
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
