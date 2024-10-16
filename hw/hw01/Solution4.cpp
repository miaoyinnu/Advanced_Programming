#include <iostream>
#include <cstring>
using namespace std;
//函数:作用是大写字母转换为小写字母
void ConvertUpper2Lower(char strArr[]) {
    int len = strlen(strArr); //返回长度

    for (int i = 0; i < len; i++) {
        // 判断是否为大写字幕
        if (strArr[i] >= 'A' && strArr[i] <= 'Z') {
            strArr[i] = strArr[i] + 32;
            // 如果是大写字母转换为小写字母
        }
    }

}
//函数:作用输出各种的数量
void PrintNum(int Arr[]) {
    int len = 5;
    for(int i = 0 ; i< len ;i++) {
        if(i ==0)
            printf("大写字母数量：%d\n", Arr[i]);
        else if(i==1)
            printf("小写字母数量：%d\n", Arr[i]);
        else if(i==2)
            printf("空格数量：%d\n", Arr[i]);
        else if(i==3)
            printf("数字数量：%d\n", Arr[i]);
        else if(i==4)
            printf("其他字符数量：%d\n", Arr[i]);
    }

}
int main() {
    const int N = 60;
    char strArr[N];
    //例子 JxfWD s57dT && 234
    cout << "请随机输入一行字符串：";
    // 读取输入的字符串
    cin.getline(strArr, 50);

    // 初始化数组 定义了一个整形数组 分别存储大写字母 小写字母 空格 数字 以及其他字符的数量
    int NumArr[] = {0,0,0,0,0};

    int len = strlen(strArr); //获取数组长度
    for (int i = 0; i < len; i++) {
        if (strArr[i] >= 'A' && strArr[i] <= 'Z') {
            NumArr[0] = NumArr[0] + 1;   // 如果是大写字母，数量+1
        } else if (strArr[i] >= 'a' && strArr[i] <= 'z') {
            NumArr[1] = NumArr[1] + 1;   // 同理
        } else if (strArr[i] == ' ') {
            NumArr[2] = NumArr[2] + 1;   // 同理
        } else if (strArr[i] >= '0' && strArr[i] <= '9') {
            NumArr[3] = NumArr[3] + 1;   // 同理
        } else {
            NumArr[4] = NumArr[4] + 1;   // 同理
        }
    }
    PrintNum(NumArr); // 调用PrintNum函数
    ConvertUpper2Lower(strArr); //调用ConvertUpper2Lower函数
    cout << "转换后的字符串：" << strArr << endl;

    return 0;
}