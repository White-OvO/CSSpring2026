#include <iostream> 
#include <cmath> 
using namespace std; 

int main() { 
//sqrt 
//(squart root of a num)
 
double y= 0;
int x = 5;
y = pow(x,3) + sqrt(x) - 3*(x);
cout << "ans : " << y <<endl;


int x1 =5; 
int y1 = 6;
int z1 = 10;
int a1 = 22; 
int b1 =13;
int x2 = ( a1 % b1 );
//cout << a1 % b1;
double ans1 = (double)(x1 + y1 * z1) / x2 ;
cout << ans1;
    return 0; 
}