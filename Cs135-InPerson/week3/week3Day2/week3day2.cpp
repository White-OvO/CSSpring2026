#include <iostream>

using namespace std; 


int main () { 

//first step 
// swaping two number 
// declare two int var name A and B
int A = 0;
int B = 0; 

//step 2 store 10 into A
//step 3 store 15 in B 

A = 10;
B = 15;


// cout << " A = " << A <<endl; 
// cout << " B =" << B <<endl;

//step 3 
//decalre Var C 


//cout << " c = " << C << "\n A = " << A << "\n B = " << B << endl;


// print the values of A and B again 

cout << "Value of A: " << A << endl; 
cout << "Value of B: " << B << endl;

int C = 0; 

//step 4 make C hold A 's value 

C = A;

//cout << C << endl;
//step 5 Make A hold B's value
A = B; 




// make B hold C 's value 

B = C; 



cout <<"\nAfter swapping:" << endl; 






cout << "Value of A : "<< A << endl;
cout << "Value of B : " << B << endl;
return 0;
}