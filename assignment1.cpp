#include <iostream>
using namespace std;

// question1
int main(){
    // question1
    cout << "hello world" << endl;
    cout <<"line1\nline2" << endl;
    cout <<"column1\tcolumn2" << endl;
    cout <<"alarm\a" << endl;
     cout << "Start\rReplace" << endl;

    // question2
    double c;
    double f;
    cout<< "enter temp in celsius: ";
    cin>> c;
    f = (9*c)/5 + 32; //note - You can’t use a variable’s value before assigning something to it. When a variable is declared but not initialized, it has indeterminate data (whatever was in that memory space before).
    cout<<"Temp in fahrenheit: "<< f<< endl;
    return 0;
}

