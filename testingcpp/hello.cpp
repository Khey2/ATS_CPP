#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    vector<string> msg { "Hello", "C++", "World", "From", "VS Code", "and the C++ Extension!"};
    
    int i = 0;
    for( const string& word: msg){
        cout << word << " ";
        i++;
    }
    cout<<endl;
    getch();

}