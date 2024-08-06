#include <iostream>
#include <algorithm>

using namespace std;

void swapElements(int arr[], int index1, int index2, int size) 
{
    if (index1 >= 0 && index1 < size && index2 >= 0 && index2 < size) 
	{
        swap(arr[index1], arr[index2]);
    } else
	 {
        cout << "Index out of range" << endl;
    }
}
void reverseArray(int arr[], int size) 
{
    reverse(arr, arr + size);
}

int findIndex(int arr[], int size, int value) 
{
    for (int i = 0; i < size; ++i) 
	{
        if (arr[i] == value)
		 {
            return i;
        }
    }
    return -1;
}
int main() 
{
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) 
	{
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; ++i)
	 {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Swap elements
    int index1, index2;
    cout << "Enter two indices to swap (0 to " << size-1 << "): ";
    cin >> index1 >> index2;
    swapElements(arr, index1, index2, size);
    
    cout << "Array after swapping: ";
    for (int i = 0; i < size; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, size);
    
    cout << "Array after reversing: ";
    for (int i = 0; i < size; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;

    int value;
    cout << "Enter a value to find its index: ";
    cin >> value;
    int index = findIndex(arr, size, value);

    if (index != -1)
	 {
        cout << "Index of " << value << ": " << index << endl;
    } else 
	{
        cout << value << " not found in the array." << endl;
    }

    delete[] arr;
    return 0;
}

