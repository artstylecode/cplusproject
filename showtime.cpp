#include<iostream>
using namespace std;

void echoTime(int hours, int minutes);


int main(void){
        
        int hours;
        int minutes;
        cout << "请输入小时数：";
        cin >> hours;
        cout << endl << "请输入分钟数：";
        cin >> minutes;
        cout << endl;
	echoTime(hours, minutes);
}

void echoTime(int hours, int minutes){
        cout << hours<< ":" << minutes;
}

