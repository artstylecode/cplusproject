#include <iostream>

struct Student{
	char name[20];//学生姓名
	int age;//学生年龄
	double score;//学生成绩
};
int main(){
	using namespace std;

	struct Student stu1;
	cout << "#############c++ 结构体测试程序#############"<<endl;
	cout << "请输入学生信息："<<endl;
	cout << "姓名：";
	cin.getline( stu1.name, 20);
	cout << "\n年龄：";
	cin >> stu1.age;
	cout << "\n成绩：";
	cin >> stu1.score;

cout << "学生姓名:"<< stu1.name << "年龄："<< stu1.age << "成绩："<< stu1.score<<endl;
return 0;
	

}
