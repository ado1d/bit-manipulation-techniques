#include <iostream>
using namespace std;

int main() {
    //upper case to lower case
    cout << (char)('A' | ' ') << '\n';   //any letter with 'or' operaton with ' ' will conver the letter to lower case
    cout << (char)('a' & '_') << '\n';   //any letter with 'and' operaton with '_' will conver the letter to upper case
}
