#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // to read the content from a file
    // ifstream is a class related to fstream library that is used 
    // to read information from files
    // MyReadFile is the name of the variable of ifstream just like data types
    ifstream MyReadFile("example.txt");
    string myText;
    // use a while loop together with the getline() function to read the file line by line
    /*this is important to know that how getline() works with the  ifstream 
    to read the full line of the text. 
    getline() works with input stream only like the cin and getline
    string from the line will be readed until it finds the escape characters in the text  */
    while (getline (MyReadFile, myText)) {
        // output the text from the file
        cout << myText << endl;
    }
    // close the file
    MyReadFile.close();
    return 0;
}