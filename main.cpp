/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
 
int main () {
  ofstream file;
  file.open ("codebind.txt");
  file << " RESUME \n \n PERSONAL DETAIL \n \nName : Chinmay Gupta \nFathers Name : Satyendra kumar Gupta\nMothers Name : Rashmi Rani Gupta \nEMAIL ID : chinmaygupta844@gmail.com \nMobile no. : 7024348410 \nAddress : old bus stand janakpur distt koriya (c.g.) \n \nOBJECTIVE\nto  be the part of the company and to enhance my skills and knowledge\n \nEDUCATIONAL PROFILE :\nHIGH SCHOOL :\ngyanasthali vidyalaya sr secondary SCHOOL\nHSC percent : 7.2 CGPA\nSSC percent : 76% \n \nSKILLS \n knowledge of C,C++ and java language \n begineer in machine learning \n \nACTIVITIES :\ninterest in badminton ";
  file.close();
  return 0;
}