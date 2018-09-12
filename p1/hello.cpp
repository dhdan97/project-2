/*
  * CSc103 Project 1: (hello_world++)
  * See readme.html for details.
  * Please list all references you made use of in order to complete the
  * assignment: your classmates, websites, etc.  Aside from the lecture notes
  * and the book, please list everything.  And remember- citing a source does
  * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
  * YOUR OWN WORK**.
  * References:
	https://www.tutorialspoint.com/cplusplus/cpp_basic_input_output.htm
	https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
	https://www-cs.ccny.cuny.edu/~wes/CSC103/commandline.html
  *
  */

#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

int main()
{

 string name; // Creates string called name
 string relative; // Creates string called relative

 cout << "Enter your name: \n"; // Asks the user to input his/her name
 getline(cin, name); // Takes input and stores it into the string "name"

 cout << "Enter a relative: \n"; // Asks the user to input the name of a relative
 cin >> relative; // Takes input and stores it into the string "relative"

 cout << "Hello. My name is " << name << ". " << "You killed my " << relative << ". " << "Prepare to die. \n"; // Prints the following: "Hello. My name is <name>. You killed my <relative>. Prepare to die."

 return 0;
}
