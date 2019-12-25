#include <cstdio>
#include <iostream>
#include <fstream>
using namespace std;

void add(const char* input) {
    ofstream myfile;
    myfile.open ("/home/jake/.rushnote.txt",ios::app);
    string output = input;
    myfile << "[ ] " + output + "\n";
    myfile.close();
}

void show() {
    system("cat $HOME/.rushnote.txt");
}

void edit() {
    system("$EDITOR $HOME/.rushnote.txt");
}

int main(int argc, char* argv[]) {
	const char* arg1 = argv[1];
	string firstFlag = arg1;

	if (firstFlag == "-a") {
        const char* arg2 = argv[2];
        const char* inputFlag = arg2;
        add(inputFlag); 
    
    } else if (firstFlag == "-s") {
        show();
    
    } else if (firstFlag == "-e") {
		edit();
    }

    return 0;
}

