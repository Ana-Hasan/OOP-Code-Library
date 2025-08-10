#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name, degree, hostel;
    int rollNo;
    float currentCGPA;

    void addDetails() {
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Roll No: "; cin >> rollNo;
        cout << "Enter Degree: "; cin >> degree;
        cout << "Enter Hostel: "; cin >> hostel;
        cout << "Enter CGPA: "; cin >> currentCGPA;
    }
    void updateDetails() { addDetails(); }
    void updateCGPA() { cout << "Enter new CGPA: "; cin >> currentCGPA; }
    void updateHostel() { cout << "Enter new Hostel: "; cin >> hostel; }
    void displayDetails() {
        cout << "\nName: " << name
             << "\nRoll No: " << rollNo
             << "\nDegree: " << degree
             << "\nHostel: " << hostel
             << "\nCGPA: " << currentCGPA << endl;
    }
};

class Complex {
private:
    float real, imag;

public:
    void set() {
        cout << "Enter real part: "; cin >> real;
        cout << "Enter imaginary part: "; cin >> imag;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex sum(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
};

namespace first {
    int x = 10;
    void show() { cout << "First namespace x = " << x << endl; }
}

namespace second {
    int x = 20;
    void show() { cout << "Second namespace x = " << x << endl; }
}

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

    //question3
    cout << "Standard for loop:" << endl;
    for (int i = 0; i < 5; i++)
        cout << i << " ";
    
    cout << "\nFor loop without initialization:" << endl;
    int i = 0;
    for (; i < 5; i++)
        cout << i << " ";

    cout << "\nFor loop without increment:" << endl;
    i = 0;
    for (; i < 5;) {
        cout << i << " ";
        i++;
    }

    cout << "\nWhile loop:" << endl;
    i = 0;
    while (i < 5) {
        cout << i << " ";
        i++;
    }

    cout << "\nDo-While loop:" << endl;
    i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i < 5);

    //question4
     Student s;
    s.addDetails();
    s.displayDetails();
//question 7
Complex c1, c2, c3;
    c1.set();
    c2.set();
    c3 = c1.sum(c2);
    cout << "Sum: ";
    c3.display();

    //question 8
    first::show();
    second::show();

    return 0;
}

