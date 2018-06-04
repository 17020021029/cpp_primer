/*
编写一个简单的桌面计算器使其能处理二元运算
练习使用函数对象
*/
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
map<string,function<int (int,int)>> binOps={
	{"+",plus<int>()},
	{"-",minus<int>()},
	{"*",multiplies<int>()},
	{"/",divides<int>()},
	{"%",modulus<int>()}
	};

int main()
{
	int left,right;
	string op;
	cin>>a>>op>>b;
	cout<<binOps[op](a,b)<<endl;

return 0;
}
/*
编译错误，出在function上，因为不了解c++ 11，所以不知道为什么出错
*/
