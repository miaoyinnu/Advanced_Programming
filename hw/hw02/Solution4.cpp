#include <iostream>
using namespace std;

void insertStr(char *t, char *s, int n);
void deleteStr(char *t, int start, int n);

int main()
{
    char text[256] = "\0";
    char s[128] = "\0";
    int k, n, start;
    while (1)
    {
        cout << "当前字符串为：" << text << endl;
        cout << "选项：1-插入字符串  2-删除字符串  0-退出\n";
        cin >> k;
        switch (k)
        {
            case 1:
            {
                cout << "输入需要插入的字符串：";
                cin >> s;
                cout << "输入插入字符串的位置：";
                cin >> n;
                insertStr(text, s, n);
                break;
            }
            case 2:
            {
                cout << "输入删除字符串开始位置：";
                cin >> start;
                cout << "输入被删字符串长度：";
                cin >> n;
                deleteStr(text, start, n);
                break;
            }
            case 0:
                return 0;
            default:
                cout << "无效的选项，请重新输入。\n";
            break;
        }
    }
}

void insertStr(char *t, char *s, int n)
{
    // 计算字符串的长度
    int len_t = 0;
    while (t[len_t] != '\0')
        len_t++;

    int len_s = 0;
    while (s[len_s] != '\0')
        len_s++;

    // 计算插入位置的索引
    int insert_pos = n;

    // 将原字符串中从插入位置开始的字符向后移动
    for (int i = len_t; i >= insert_pos; i--)
    {
        t[i + len_s] = t[i];
    }

    // 遍历复制字符串
    for (int i = 0; i < len_s; i++)
    {
        t[insert_pos + i] = s[i];
    }
}

void deleteStr(char *t, int start, int n)
{
    // 计算字符串长度
    int len_t = 0;
    while (t[len_t] != '\0')
        len_t++;

    // 计算插入位置的索引
    int del_start = start - 1;

    // 左移字符串
    for (int i = del_start + n; i <= len_t; i++)
    {
        t[i - n] = t[i];
    }
}