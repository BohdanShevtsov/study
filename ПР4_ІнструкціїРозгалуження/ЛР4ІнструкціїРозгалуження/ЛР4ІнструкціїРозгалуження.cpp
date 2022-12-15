#include <iostream>
using namespace std;

bool induct() {
    bool ISBELONGSTOTHERANGE = true;
    bool RESULT = ISBELONGSTOTHERANGE;
    return RESULT;
}

bool deduct() {
    bool ISNOTBELONGSTOTHERANGE = true;
    bool RESULT = ISNOTBELONGSTOTHERANGE;
    return RESULT;
}
int main() {
    setlocale(LC_ALL, "");
    cout << induct() << endl;
    cout << deduct() << endl;
}

