#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream arquivo;
    arquivo.open("arq.txt", ios::app);
    arquivo<<"Pls come in"<<endl;
    arquivo.close();


    return 0;
}