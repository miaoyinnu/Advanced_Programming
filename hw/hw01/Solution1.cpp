#include <iostream>
using namespace std;

// 定义了一个返回值为布尔类型的函数
bool IsTriangle(double a,double b,double c) {

    // 判断是否为三角形的条件,三边满足下列条件
    if((a+b>c) && (a+c>b) && (b+c>a)) {
        return true; // 是三角形返回true
    }
    return false; // 不是三角形返回false
}

int main() {
    double a,b,c; //初始化a b c三条边
    cout<<"请分别输入三条边的值(用空格隔开)";
    cin>>a>>b>>c; //输入三条边的值

    // 调用IsTriangle函数
    if(IsTriangle(a,b,c)) {
        printf("这3个值可以表示一个三角形的三条边。");
    }
    else
        printf("这3个值不可以表示一个三角形的三条边。");

    return 0;
}
