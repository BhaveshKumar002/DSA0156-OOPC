#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
    int n = strlen(str);
    char* start = str;
    char* end = str + n - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
