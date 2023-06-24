#include <iostream>
using namespace std;

int main() {
    int l, biggest = 0;
    cout << "Enter no of elememts" << endl;
    cin >> l;
    int arr[l];
    cout << "Enter the numbers in array: " << endl;
    for(int i = 0; i < l; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < l; i++){
        if(arr[i] > biggest)
            biggest = arr[i];
    }
    cout << "Biggest element: " << biggest;
    return 0;
}
