#include<iostream>
#include<ostream>

// function to swap two integers
void swap(int &a, int &b) {
    int t = a; // store value of a in temporary variable t
    a = b; // assign value of b to a
    b = t; // assign value of t (original a) to b
}

void heapify(int *arr, int n, int i) {
// function to maintain the heap property for a subtree rooted at index i
    int largest = i; // initialize largest as root
    int left = 2 * i + 1; // calculate index of left child
    int right = 2 * i + 2; // calculate index of right child

    // check if left child is larger than root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    // check if right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // if largest is not the root, swap and recursively heapify the affected subtree
    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest); // recursive call to heapify the subtree
    }
}

void create_max_heap(int *arr, int n) {
// function to build a max heap from the input array
    int last_parent_index = n / 2 - 1; // index of the last non-leaf node
    for (int i = last_parent_index; i >= 0; i--) {
        heapify(arr, n, i); // heapify each subtree
    }
}

void heapsort(int *arr, int n) {
// function to sort an array using heap sort algorithm
    create_max_heap(arr, n); // first, build the max heap
    for (int i = 0; i < n; i++) {
        swap(arr[0], arr[n - 1 - i]); // move the current largest to the end
        heapify(arr, n - 1 - i, 0); // heapify the reduced heap
    }
}

std::ostream& operator<<(std::ostream &dout, int arr[]) {
// overloading the << operator for printing the array
    for (int i = 0; i < 20; i++) { // size hard coded just for now to see output
        std::cout << arr[i] << " "; // print each element of the array
    }
    std::cout << std::endl;
    return dout; // return the ostream object for chaining
}

int main() {
    int arr[20] = {34, 9, 7, -1, 0, 9, -8, 65, 77, 0, -9, 3, 2, 3, 44, 4, 87, 6, 5, 45};   
    int size = sizeof(arr) / sizeof(arr[0]); // calculte size of array
    std::cout << arr; // print the original array
    heapsort(arr, size); // sort the array using heapsort
    std::cout << arr; // print the sorted array

    return 0; 
}
