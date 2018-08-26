#include <iostream>

using namespace std;

void echoBlind(void);

void echoRun(void);

int main(void){
	echoBlind();
	echoRun();
}

void echoBlind(void){
	cout << "Three blind mice"<<endl;
	cout << "Three blind mice"<<endl;
}

void echoRun(void){
	cout << "See how they run"<< endl;
	cout << "See how they run"<< endl;
}
