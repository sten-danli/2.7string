// 2.7string类型应用,auto 范围for针对string的使用

#include <iostream>
#include<string>
using namespace std;
int main()
{
	//a)s.c_str()返回一个字符串中的内容指针。返回一个指向正规的c字符串的指针常量，也就是以\0结尾的。
	//这个函数的引入是为了与c语言兼容，在c语言中没有string类型，所以我们得通过string类对象的c_str()
	//成员函数把string对象换成c语言中的字符串样式。
	string s10 = "Hello World!";
	const char* p = s10.c_str();

	char str[100];
	strcpy_s(str, sizeof(str), p);
	cout << str << endl;

	//b)用c语言的字符数组初始化string类型。
	string s1(str);
	cout << s1 << endl;

	//c)范围for针对string的使用:c++中提供了范围for能够遍历一个序列中的每一个元素
	//string可以看成是一个字符序列;

	string s22 = "i Love China";
	for (auto &x : s22)			//auto变量类型自动对端
	{
		
			x = toupper(x);
		
		cout << x << endl;	//便利字符串string.
	}


}

