#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //用两个for循环遍历1-9
    for(int i=1;i<=9;i++) { //i的值从1到9 大于9退出for循环
        for(int j=1;j<=i;j++) { //j的值从1到i 大于i退出for循环

            cout<<setw(2)<<j<<" * "<<i<<" = "<<setw(2)<<i*j<<" "; // 引入setw()进行输出排列

        }
        cout<<endl; //i的for循环末尾进行换行
    }

    return 0;
}
