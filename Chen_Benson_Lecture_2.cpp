// Benson Chen
// Lecture 2
// 09/16/24

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    //Series of simple data types
    int top_bun = 2;
    int middle_bun = 4;
    int white_bread = 6;
    int bottom_bun = 18;
    float cheese = 3.5;
    double cabbage = 3.9;
    double ketchup = 5.4;
    double mayo = 13.6;
    char char_1 = 97;
    char char_2 = 98;
    bool myboolLean = true;
    string phrase = "no";

    //First series of outputs
    cout << "top_bun = " << top_bun << endl;
    cout << "middle_bun = " << middle_bun << endl;
    cout << "white_bread = " << white_bread << endl;
    cout << "bottom_bun = " << bottom_bun << endl;
    cout << "cheese = " << cheese << endl;
    cout << "cabbage = " << cabbage << endl;
    cout << "ketchup = " << ketchup << endl;
    cout << "mayo = " << mayo << endl;
    cout << "char_1 = " << char_1 << endl;
    cout << "char_2 = " << char_2 << endl;
    cout << "myboolLean = " << myboolLean << endl;
    cout << "phrase = " << phrase << endl;
    cout << endl;

    //Slide 37 code
    int inches; //variable to store total inches
    inches = 100; //store 100 in the variable inches

    cout << inches << " inch(es) = "; //output the value of inches and the equal sign
    cout << inches / 12 << " feet (foot) and "; //output the maximum number of feet (foot)
    cout << inches % 12 << " inch(es)" << endl; //output remaining inches

    //Comparision
    cout << "\n" << "a < b = " << (char_1 < char_2) << endl;
    cout << endl;

    //Performing expressions
    cout << "2 + 3.5 = " << top_bun + cheese << endl;
    cout << "6 / 4 + 3.9 = " <<  white_bread / middle_bun + cabbage << endl;
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << ketchup * top_bun - (mayo + bottom_bun / top_bun) << endl;

    return 0;
}

/*top_bun = 2
middle_bun = 4
white_bread = 6
bottom_bun = 18
cheese = 3.5
cabbage = 3.9
ketchup = 5.4
mayo = 13.6
char_1 = a
char_2 = b
myboolLean = 1
phrase = no

100 inch(es) = 8 feet (foot) and 4 inch(es)

a < b = 1

2 + 3.5 = 5.5
6 / 4 + 3.9 = 4.9
5.4 * 2 - (13.6 + 18 / 2) = -11.8*/