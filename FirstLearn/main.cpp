#include <iostream>//头文件
#include <limits>
using namespace std;//告诉编译器使用std命名空间
typedef int summer;
void c_default_type();//函数声明

//#define预处理器
#define LENGTH 10;//常量是固定值，在程序执行期间不会改变。这些固定的值，又叫做字面量。
const int WEIGHT = 20;
enum Seasons{
    Spring,
    Summer,
    Autumn,
    Winter
} seasons;

//typedef为一个已有的类型取一个新的名字
void typedef_demo(){
    summer x = 12;
    cout << x << endl;
}

//一般计算
int arithmatical(){
    int x = 3;
    int y = 5;
    cout << x+y << endl;
    return 0;
}

/* 
 * C++是一种静态类型的，编译式的，通用的，大小写敏感的，不规则的编程语言
 * C++的四大特征：封装，抽象，继承，多态
 * C++的三个重要部分
 *   1. 核心语言，提供了所有的构件块，包含变量，数据类型和常量，等等
 *   2. C++标准库，提供了大量的函数，用于操作文件，字符串等
 *   3. 标准模板库，提供了大量的方法，用于操作数据结构等
 */

//https://www.runoob.com/cplusplus/cpp-modifier-types.html
int main(){//程序开始执行的地方
    seasons = Autumn;
    cout << LENGTH;
    cout <<endl<< seasons <<endl;
    c_default_type();

    return 0;
}

//使用 extern 关键字在任何地方声明一个变量
extern int a ;
//C++里的内置类型

void c_default_type(){
    bool isRight = true;//布尔型,一个字节
    char content = 'x';//字符型，-128 到 127 或者 0 到 255
    unsigned char word;//0 到 255
    signed char sword ;//-128 到 127
    int count = 12;//整形 -2147483648 到 2147483647
    unsigned int ucount = 12;//0 到 4294967295
    short int scount = 12;//-32768 到 32767
    unsigned short int us_count = 12;//0 到 65,535
    long int l_count = 12;//-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807,8个字节
    float miles = 12.4;//浮点型，4个字节
    double heights = 12.434;//双浮点型 8个字节
    long double weight = 12.3;//16个字节
    wchar_t wcontent ;//宽字符型  2或4个字节

    
    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  

}

