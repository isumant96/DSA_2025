#include <iostream>
using namespace std;

void reverseArray(int arr[], int left, int right ) {
    if(left >= right) return;
    // Swap elemets
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    // Move toward center 
    reverseArray(arr, left + 1, right - 1);

}
int main(){
    int n;
    cin>> n;

    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    reverseArray(arr, 0, n-1);
    for (int i = 0; i<n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}