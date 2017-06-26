#include <iostream>                   //this is a pre-processor director (includes file stream didn't make in this program). Groups commands (e.g. cout is command in this)
#include <string>                     //this director allows for the commands for the string; the string compound type is defined

using namespace std;                  //shows using all the standard functions in standard library

int main()                            //function. int means using integers in calculations, main is the main function of the program
{                                     // opening/closing squiggly brackets have the statements/instructions
  cout << "Hello world!" << endl;   //instruction - all instructions end with ";"
                                        //"cout" is output stream object - send text to terminal. data from computer delivered out to the user.
                                             // Hence "<<" on both sides of information to be delivered to user.
                                       //"text" between means it will just be printed on the screen. "endl" is end line

  int i=2;                          //int let's know calculations will work as integers. i is variable for 2
  cout<< "i=" << i << endl;         // prints "i =" on screen and then gives data i (so as variable, will print 2 on screen)

  double a=3.3;                     // double works with numbers w/ decimal points. a is variable
  cout<< "a=" <<a<<endl;

  int j = a*i;                      //variable j defined as a multiplied by i

  cout<< "a*i =" << j << endl <<endl;     //prints a*i on screen and then displays numerical j (but only as an integer, therefore decimal is not included)




  return 0;



}
