#include<iostream> 
#include<cmath>

using namespace std;

int main () { 
cout << "     7^2 + 4^3 - 2^4" << endl;
cout << "x=  ----------------" <<endl;
cout << "     5^3 - 2^5 " << endl << "\n" << endl;

int ans = (pow(7, 2) + pow(4,3) - pow(2,4) ) / (pow(5,3) - pow ( 2 ,5 )); 
cout << "x= " << ans << endl;



    return 0; 
}