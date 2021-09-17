// demo.cpp

#include<iostream>
#include<string>
using namespace std;

#define Day 7
int method() {
    const int Month = 12;
    cout << "Month : " << Month << endl;
    cout << "Day : " << Day << endl;
    cout << Day << endl;
    return 0;
}

int method2() {
    float f = 3.14;
    double d =3.14;
    cout << "sizeof(float) = " << sizeof(float) << "  " << f << endl;
    cout << "sizeof(double) = " << sizeof(double) << "  " << d << endl;
    return 0;
}

void method3() {
    char ch = 'a';
    cout << ch << endl;
    cout << (int)ch << endl;
}

void method4() {
    char chs[] = "Hello\n";
    string str = "World\n";
    cout << chs << str;
}

void method5() {
    bool tag = false;
    cout << tag << endl;
}

void method6() {
    int a;
    cout << "enter something : ";
    cin >> a;
    cout << "a = " << a; 
}

void method7() {
    string a = "Hello";
    cout << a << endl;
    a += "World";
    cout << a << endl;
}

void method8() {
    cout << rand();
}

// 水仙花数，每个位上的数字的三次幂之和等于这个数本身
bool method9(int number) {
    if (number == 1) {
        return true;
    }
    int remainder = number % 10;
    int shang = number / 10;
    int count = 0; 
    count += remainder * remainder * remainder;
    do {
        remainder = shang % 10;
        shang = shang / 10;
        count += remainder * remainder * remainder;
    } while (shang > 0);
    if (count == number) {
        return true;
    }
    return false;
}

// 水仙花数的执行程序
void method10(int value) {
    // while (1)
    {
        // cin >> value;
        if (method9(value))
        {
            cout << value << "  is the number" << endl;
            // system("pause");
        }
        else
        {
            cout << value << "  is not the number" << endl;
        }
    }
}

// 敲桌子：从1到100，数字中含有7或者是7的倍数输出“敲桌子”
// 左闭右开
void method11() {
    int start = 1;
    int end = 200;
    int tag = 0;
    for (int i = start; i < end; i++) {
        tag = 0;
        // 当前数是7的倍数
        if (i % 7 == 0) {
            cout << "Hello\n";
            tag = 1;
            continue;
        }
        // 当前数的某一位是7
            int remain = i;
            int shang = i;
        do {
            remain = shang % 10;
            shang = shang / 10;
            if (remain == 7) {
                cout << "Hello\n";
                tag = 1;
                break;
            }
            if (shang == 7) {
                cout << "Hello\n";
                tag = 1;
                break;
            }
        } while (shang > 0);
        if (!tag)
            cout << i << endl;
    }
}

int main() {
    method11();
    system("pause"); 
    return 0;
}