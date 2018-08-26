#include <iostream>
#include <string>

int main(){
	
	using namespace std;
	char str1[10];
	string str2;
	cout << "#####string类测试程序#######"<<endl;
	cout<< "请为一个char数组进行赋值操作:";
	cin.getline(str1, 10);
	cout<<endl;
	cout<< "请为一个string类进行赋值：";
	cin >> str2;
	cout<< endl<< "输入的str1的字符串为："<< str1<<endl;
	cout << "输入的str2的字符串为："<< str2<<endl;
	cout << "####程序测试结束####"<<endl;


	return 0;
}
