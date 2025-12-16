//in this program we will modify a file by writing some data into it and without changing the previous one
#include <iostream>
#include <fstream>
using namespace std; 
int main(){
    //to modify a file and write the text into it without changing the previous one
    /*in this case i am using the fstream because we are going to perform the writing and reading 
    of the file simaltaneously.*/
    fstream file("example.txt", ios::out | ios::app); 
    //write text into the file
    file << "\nThis is the modified line."<<endl;
    string line;
    while(getline (file, line)){
        cout<<line<<endl;
    }
    //close the file  
    file.close();
     return 0;
}