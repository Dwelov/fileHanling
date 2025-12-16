// in this program we will create a file and  write the text into it
#include <iostream>
#include <fstream>  
using namespace std;
int main(){
    //to create a file and write the text into it
    //Ofstream is a class realated to the fstream library that is used 
    //to create files and write information to files
    // myfile is name of the variable of ofstream just like data types
    //if files are present then it will modify else it will create a new file
    ofstream MyFile("example.txt"); 
    //write text into the file
    MyFile << "Hello World!\n";
    MyFile << "This is my first file created using C++";
    //close the file
    MyFile.close();
    return 0;
}