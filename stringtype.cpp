#include <iostream>
#include <string>

int main(){
	using namespace std;
	string str1="第一个字符串";
	string str2,str3;

	cout<<"####string类基本操作测试程序#####"<<endl;
	str2 = str3 = str1;
	cout << "str1:" <<str1 << "str2:"<<str2<< "str3:"<< str3<<endl;
	cout << "str1拼接str2:"<<str1 + str2<<endl;
	str2 += str3;
	cout << "str2拼接str3："<< str2<<endl;
	str1+="keke";
	cout << "str1拼接任意字符串:"<<str1<<endl;
	cout << "####测试程序结束####"<<endl;
	
	

	return 0;
}
