
#include <iostream>

using namespace std;

int main (){

double* p1 = new double(3.14);
 double* p2 =p1;                   //don't use the & operator here because p1 is already a pointer; it alreasy has a memory address *

cout << "p1 points at, the memory address,  " << p1 <<endl;
cout << "*p1 gives the assigned data value. *p1 =  " << *p1 << endl;
 cout << "p2 points at, the same memory address of p1, " << p2 << endl;
 cout << "*p2 gives the assigned data value, the same as *p1. *p2 = " << *p2 << endl;  //p1 is the memory address, as assigned. *p1 is the assigned data value to p1.
                                                                  //p2 is the memory address of p1. *p2 is the assigned data value pointing to p1.
                                                                  //p1 = p2 = memory address.      *p1 = *p2 = 3.14
 *p1  = *p1*2; //multiplies by two now

  cout << "*p1 times 2 is " << *p1 <<endl;
 cout << "*p2 times 2 is " << *p2 << endl;


 return 0;



}
