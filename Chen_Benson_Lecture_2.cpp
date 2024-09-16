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
    int bottom_bun = 18;
    float cheese = 3.5;
    double cabbage = 3.9;
    double ketchup = 5.4;
    double mayo = 13.6;
    char tomato = 54;
    bool beef = true;
    string onions = "4";

    //First series of outputs
    cout << "top_bun = " << top_bun << endl;
    cout << "bottom_bun = " << bottom_bun << endl;
    cout << "cheese = " << cheese << endl;
    cout << "cabbage = " << cabbage << endl;
    cout << "ketchup = " << ketchup << endl;
    cout << "mayo = " << mayo << endl;
    cout << "tomato = " << tomato << endl;
    cout << "beef = " << beef << endl;
    cout << "onions = " << onions << endl;

    //

    cout << "2 + 3.5 = " << top_bun + cheese << endl;
    cout << "6 / 4 + 3.9 = " << tomato + cabbage << endl;
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << ketchup * top_bun - (mayo + bottom_bun / top_bun) << endl;
    /*2 + 3.5
6 / 4 + 3.9
5.4 * 2 - (13.6 + 18 / 2)*/

    return 0;
}
