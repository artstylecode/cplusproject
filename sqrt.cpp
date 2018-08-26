#include <iostream>
#include <cmath>

int main(void){
  using namespace std;

  double length;//length

  cout << "please enter the length:"<< endl;
//接受用户输入的正方形边长
  cin >> length;
//计算正方形面积
  length = pow(length, 2);
  cout << endl<< "the area size is "<< length<<endl;
  return 0;
  
}
