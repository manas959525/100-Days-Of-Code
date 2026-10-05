//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;
    int prevGreater[n];

    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            prevGreater[i] = -1;
        } else {
            prevGreater[i] = s.top();
        }
        s.push(arr[i]);
    }

    cout << "Previous Greater Elements: ";
    for (int i = 0; i < n; i++) {
        cout << prevGreater[i] << " ";
    }
    cout << endl;

    return 0;
}