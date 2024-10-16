#include <iostream>
using namespace std;
bool isPrime(int number) {

    if(number == 1 || number == 0) // 用or判断
        return  false; //0和1不是质数 返回false
    else if(number>=2){
        for(int i = 2; i < number; i++){ // 质数是一个大于1的自然数,从2开始,小于number结束
            if (number % i == 0) {
                return false; // 返回false
            }
        }
    }
    return true; // 都满足不能被其他自然数整除的数为质数 返回ture

}

int main() {
    for(int i=1;i<=1000;i++) { //for循环遍历1-1000

        if(isPrime(i)) //调用isPrime函数 判断是否为素数

            cout<<i<<"是素数"<<endl; //true 打印为素数

    }
    return 0;
}
