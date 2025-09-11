#include <iostream>
using namespace std;

int main() {
    int arr[5]={4,5,2,10,8};
    int n=5;
    int result[n];

    for (int i = 0; i < n; i++) {
        result[i] = -1;  
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] < arr[i]) {
                result[i] = arr[j];
                break; 
            }
        }
    }


    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}