#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//函数:冒泡排序函数
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    // 控制排序轮数
    for (int i = 0; i < n - 1; ++i) {
        // 比较并交换
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                //如果当前元素大于下一个元素,进行交换
            }
        }
    }
}

//函数:快速排序函数
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int p = arr[low];//选定p
        int left = low, right = high;
        //分区过程，将小于p的放在左边，大于p的放在右边
        while (left < right) {
            while (left < right && arr[right] >= p) --right;
            arr[left] = arr[right];
            while (left < right && arr[left] <= p) ++left;
            arr[right] = arr[left];
        }
        arr[left] = p;
        // 左边进行递归排序
        quickSort(arr, low, left - 1);
        // 右边进行递归排序
        quickSort(arr, left + 1, high);
    }
}

int main() {

    // 初始化数组
    vector<int> numbers(10);
    for(int i=0;i<10;i++) {
        cin>>numbers[i];
    }
    // 初始化数组
    vector<int> bubbleSorted = numbers;
    vector<int> quickSorted = numbers;

    cout << "未排序的数组: ";
    // for each循环 遍历输出源数组
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // 调用冒泡排序函数
    bubbleSort(bubbleSorted);
    cout << "冒泡排序结果: ";
    // for each循环 遍历输出数组
    for (int num : bubbleSorted) {
        cout << num << " ";
    }
    cout << endl;

    // 调用快速排序函数
    quickSort(quickSorted, 0, quickSorted.size() - 1);
    cout << "快速排序结果: ";
    // for each循环 遍历输出数组
    for (int num : quickSorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}