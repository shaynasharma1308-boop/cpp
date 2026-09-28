#include <iostream>
using namespace std;
bool isPalindrome(char text[], int left, int right) {
    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    char text[1000];
    cin >> text;
    int length = 0;
    while (text[length] != '\0') {
        length++;
    }
    int left = 0;
    int right = length - 1;
    bool canBePalindrome = true;
    while (left < right) {
        if (text[left] != text[right]) {
            canBePalindrome = isPalindrome(text, left + 1, right) ||
                               isPalindrome(text, left, right - 1);
            break;
        }
        left++;
        right--;
    }
    if (canBePalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}