// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

using namespace std;


void createElementByElement(int arr[], int i) {
    if (i < 0) { return; }
    int parent = (i - 1) / 2;
    int k = i;
    if (arr[parent] < arr[k]) {
        swap(arr[parent], arr[k]);
        createElementByElement(arr, parent);
    }

}

void createHeap(int arr[], int n) {
    // 5 10 20 3 0 60
    // build max heap parent must greater than thier childs
    for (int i = 1; i < n; i++) {
        createElementByElement(arr, i);
    }
}


void insertElementInHeap(int arr[], int n, int value) {
    arr[n] = value;

    int i = n; // 5


    while (i > 0) { // 5 > 0 yes
        int parent = (i - 1) / 2; // 4 / 2 = 2
      
        if (arr[parent] < arr[i]) { // 
            swap(arr[parent], arr[i]);
            i = parent;
        }
        else {
            return;
        }
    }
}


int main()
{
    // implement heap
    int arr[6] = { 1, 2, 4, 3, 9 };
    createHeap(arr, 5);
    insertElementInHeap(arr, 5, 10);
    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    
    
}

