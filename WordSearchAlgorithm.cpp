#include <iostream>
using namespace std;

int searcher(string arr[], string searchword, int words) {
    int size = sizeof(arr[words]) / sizeof(int);
    int i;
    for(i = 0; i < size; i++) {
        if(searchword == arr[i]) {
            cout << "You entered " << searchword << " at " << i+1 << " place." << endl;
        }
    }
}

int main() {
    int words;
    string searchword;
    cout << "How much words do you want there to be: ";
    cin >> words;
    string arr[words];
    cout << "Enter them all below:" << endl;
    for(int i = 0; i < words; i++) {
        cin >> arr[i];
    }
    cout << "Enter one of the word you entered to search: ";
    cin >> searchword;
    searcher(arr, searchword, words);
    return 0;
}