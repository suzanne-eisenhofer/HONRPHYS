
#include <iostream> 

using namespace std;

int main () {

  int i =10; 
    cout << "The memory address of i is " << &i << "\n";
  cout << "The data stored at memory address " << &i << " is " << i << "\n";

  int* p = &i;
  cout << "The value of p is " << p << "\n";
  cout << "We say that p 'points at' the memory location referenced by address " << p << "\n";
  cout << "The data stored at memory address " <<p<< " is " << *p << "\n";

                  //program 1
  cout <<endl;

  int a = 10;
  int b = a;
  cout << "a= " << a << " and b= " << b << "\n";
  
  a = 5;
  cout << "a= " << a << " and b= " << b << "\n";
  
  b = 1;
  cout << "a= " << a << " and b= " << b << "\n";

                    //program 2 - acts differently than program 1 because of pointer
  cout << endl;

  int c = 10;
  int* d = &c;
  cout << "c= " <<c<< " and *d= " << *d<< "\n";

  c = 5;
  cout << "c= " <<c<< " and *d= " << *d<< "\n";

  *d=1;
  cout<< "c= " <<c<< " and *d= " << *d << "\n";

                    //Explanation of what is going on
  cout<<endl;
  cout << "c's numerical memory address is " << &c << endl;
  cout << "pointer d's value is the memory address of c,  " << d<<endl;
  cout << "c's assigned data by me previously is 1, so c = " << c << endl;
  cout << "*d will give the assigned data of c, whereas d gives the memory address of c, so *d = " << *d << endl;


  return 0;


} 
