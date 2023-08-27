#include<iostream>
using namespace std;


int A = 20, B = 5;


int myfunction(int*p){
*p = *p + 10;
return *p;
}


int main(){
int result;
A = 20; B = 5;
result = A + myfunction(&A);
cout << result << endl;
A = 20; B = 5;
result = myfunction(&A)+A;
cout << result << endl;


return 0;
}
