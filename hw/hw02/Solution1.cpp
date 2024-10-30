#include <iostream>
using namespace std;

// 连接两个字符串的函数
void connect(char *dest, const char *str1, const char *str2) {
    // 定义指针指向dest
    char *ptr = dest;

    // 复制第一个字符串 用 while 遍历字符串 遇到结束符结束遍历
    while (*str1 != '\0') {
        *ptr = *str1;
        ptr = ptr + 1 ;
        str1 = str1 + 1;
    }

    // 复制第二个字符串 同理
    while (*str2 != '\0') {
        *ptr = *str2;
        ptr = ptr + 1 ;
        str2 = str2 + 1;
    }

    // 添加字符串结束符
    *ptr = '\0';
}

int main() {
    // 定义最大长度
    const int MAX_SIZE = 100;
    // 定义字符串
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    // 存储结果
    char result[2 * MAX_SIZE];

    // 输入字符串
    cout << "输入拼接左边的字符串:";
    cin.getline(str1, MAX_SIZE);

    cout << "输入拼接右边的字符串：";
    cin.getline(str2, MAX_SIZE);

    // 调用函数连接字符串
    connect(result, str1, str2);

    cout << "拼接后的字符串：" << result << endl;

    return 0;
}