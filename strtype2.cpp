#include <iostream>
#include <cstring>
#include <string>

int main(){
	using namespace std;

	char char1[15] = "test str1";
	char char2[15];
	string str1 = "test string1";
	string str2;

       cout<< "######字符串数组与string类的拼接复制操作测试程序#########"<<endl;

	//字符串拷贝操作
	strcpy(char2, char1);
	str2 = str1;
	cout << "复制后的字符信息如下："<<endl;
	cout << "char1:"<< char1<< " char2:"<< char2<<endl;
	cout << "str1:" << str1 << " str2:"<< str2<<endl;
	
	//字符串拼接
	strcat(char1,"  char");
	str1+= " string";
	cout << "字符串拼接后的信息如下:"<<endl;
	cout << "char1:"<< char1<< " char2:"<< char2<<endl;
        cout << "str1:" << str1 << " str2:"<< str2<<endl;

	int strsize = str1.size();
	int chalen = strlen(char1);

	cout<< "处理后的字符串长度信息如下:"<<endl;

	cout << "char1 的长度为："<< chalen<< endl;
	cout << "str1 的长度为："<< strsize<<endl;

	return 0;
}
