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




  int n = 10;
  cout <<"n is " <<n<< endl;       //variable n "n is" printed on screen with n, 10, following

  n--;                            //"n" changed so when used again this value will be presented. Double subtraction signs mean subtract 1 from value

  cout <<"n is now " <<n<< endl;

  n++;                            // "n" changed again so it will show 10 (double addition signs mean add 1 to n)

  cout<<"n is now " << n<< endl <<endl;

  if (n>10)                                   //if statement calls upon condition of n being greater than 10, rest of block will execute
    cout << "n is more than 10"<<endl<<endl;
  else if (n<10)
    cout <<"n is less than 10"<<endl<<endl;       //else if calls upon if that condition fails, new condition
  else
    cout <<"wow n is still 10"<<endl<<endl;                 //else calls upon if all previous conditions fail, this block is executed

  string mystring;                    // references the string type, mystring being the identifier (variable)
  mystring = "wow a string sentence" ; //assigning value to variable
  cout << mystring << endl;           // rather than have to write the sentence, just have to place variable (with assigned value) as output

  mystring = "another string sentence?"; //another content is assigned to the string
  cout << mystring << endl <<endl;


  bool prop;                          //true or false (1 or 0) boolean type and identifier prop

  prop = (5>1);                       //if 5 is actually greater than 1, "prop is 1" will appear
  cout <<"prop is " << prop<< endl;   //since 5 is actually greater than 1, "prop is 1" appears, as it is true

  prop = (1>5);                       //if 1 is actually greater than 5, "prop is 1" will appear
  cout<<"prop is " <<prop<< endl;     //since 1 is actually less than 5, "prop is 0" appears, as it is false

  prop= (1!=5);                       // "!" indicates that it is not; "!=" indicates it is not equal to. If 1 is not equal to 5, "prop is 1 will appear"
  cout << "prop is "<<prop<<endl<<endl;     // since 1 is not equal to 5, "prop is 1" appears, as it is true


  int s=10;                           //1st loop. set variable s to be 10

  while(s>(-1)){                         //while is a keyword for a loop. The instructions within the squiggly brackets apply while s is greater than -1.
    //while-loop: repeats statement while the expression is true. If statement becomes no longer true during loop, loop will end
    cout<<"s is "<<s<<endl;         //familiar output. prints on screen what is in quotation marks and what s is declared as
    //As loop begins, if value fulfills condition s>-1, the block that follows that condition is executed and repeated for as long as the condition holds true.
    s--;                            //s--; decreases n by 1 each time the block is executed. If s--; was not there, the loop would continuously print “s is 10” over and over

  } cout<<endl;

  for (int s=10; s>(-1); s--){            //2nd loop - for loop. does the same as while loop here
    cout<<"s is again " <<s<<endl;
  }
  cout<<endl;                         //simply gives another free line in program


  for(int r=7;r>(-1);r--){        //3rd loop --> for loop = 7 is the initializer, >-1 is the condition for loop to continue, r-- means decrease by 1
    cout<<r<<", ";}
  cout<<"TIME'S UP" <<endl;




  for (int p=0, q=10;p!=q;++p,--q){   //experimental for loop --> two variables. p from 0 counting up , q from 10 counting down. p cannot equal q so when they would, the loops stops
    cout<<p<<" ";
    cout<<q<<" "<<endl;
  }
  cout<<endl;

  string str("WOWZERS");         //range-based loop using string (not really range-based, simply for loop using string)
  for (int z = 0; z < str.size(); z++){
    cout << "*"<<str[z]<<"!";}

  cout<<'\n';

  return 0;



}
