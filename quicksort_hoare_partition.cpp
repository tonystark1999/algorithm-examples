// Demonstration of the quicksort algorithm using the
// Hoare partition scheme. This is just an example
// for learning and should not be used in production
// code.

// Information about the Hoare partition scheme (Wikipedia):
// https://en.wikipedia.org/wiki/Quicksort#Hoare_partition_scheme

#include <iostream>
using namespace std;



template<class T> void quicksort(T a[], const int start_index, const int end_index);

template<class T> int partition(T a[], const int start_index, const int end_index);

template<class T> void swap_values(T &a, T &b);


int main()
{
    int array_size = 10;
    int a[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    cout << "Initial array: [ ";

    for (int i = 0; i < array_size; i++)
        cout << a[i] << " ";

    cout << "]";

    quicksort(a, 0, array_size);

    cout << "\nSorted array: [ ";
    for (int i = 0; i < array_size; i++)
        cout << a[i] << " ";

    cout << "]";
}


template<class T> void quicksort(T a[], const int start_index, const int end_index)
{
    if (start_index < end_index)
    {
        int p = partition(a, start_index, end_index);
        quicksort(a, start_index, p);
        quicksort(a, p + 1, end_index);
    }
}

template<class T> int partition(T a[], const int start_index, const int end_index)
{
    T pivot = a[start_index];
    int i = start_index - 1;
    int j = end_index + 1;

    while (true)
    {
        do {
            i++;
        }while (a[i] < pivot);


        do {
            j--;
        }while (a[j] > pivot);

        if (i >= j)
            return j;
        swap_values(a[i], a[j]);

        // After each swap print the array.
        cout << "\n\n[ ";

        for (int i = 0; i < 10; i++)
        {
            cout << a[i] << " ";
        }

        cout << "] \n";

    }
}

template<class T> void swap_values(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
