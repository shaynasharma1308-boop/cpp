#include <iostream>
using namespace std;
int main() {
    char text[1000];
    cin>>text;
    int n= 0;
    while(text[n] != '\0') {
        n++;
    }
    int bestStart = 0;
    int bestLength = 1;
    for (int center = 0; center < n; center++) {
        int left = center;
        int right = center;
        while (left >= 0 && right < n && text[left]==text[right]) {
            int matchLength = right - left + 1;
            if (matchLength > bestLength) {
                bestLength = matchLength;
                bestStart = left;
            }
            left--;
            right++;
        }
        left = center;
        right = center + 1;
        while (left >= 0 && right < n && text[left] == text[right]) {
            int matchLength = right - left + 1;
            if (matchLength > bestLength) {
                bestLength = matchLength;
                bestStart = left;
            }
            left--;
            right++;
        }
    }
    for (int i = bestStart; i < bestStart + bestLength; i++) {
        cout << text[i];
    }
    cout << endl;
    return 0;
}