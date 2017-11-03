// This is a demonstration of the selection sort algorithm
// DO NOT USE IN PRODUCTION CODE.
//
// This code contains insecurities such as system() as it
// is just a demonstration of how the selection sort algorithm
// works.

#include <iostream>
#include <limits>
#include <cstdlib>


void pause();

// Sorts the input array from lowest to highest.
// Precondition: The type of the array, has to have
// a defined order.
template<class T> void selection_sort(T a[], const int size);

// Returns the index of the lowest item in the segment
// starting at start_index to the end of the array.
template<class T>
int index_of_next_smallest(T a[], const int size, const int start_index);

// Swaps the two values.
template<class T> void swap_values(T &a, T &b);



int main(int argc, char *argv[])
{
    std::cout << "Demonstration of selection sort using an integer array. \n";
    std::cout << "-------------------------------------------------------\n\n";

    int array_size = 0;

    std::cout << "Enter array size: ";
    std::cin >> array_size;


    // Declare integer with array_size elements.
    int a[array_size];


    std::cout << "Enter " << array_size << " integer values: \n";

    for (int i = 0; i < array_size; i++)
        std::cin >> a[i];

    std::cout << "Initial array: \n        [ ";

    for (int i = 0; i < array_size; i++)
    {
        std::cout << a[i] << " ";
    }

    std::cout << "]" << '\n';

    selection_sort(a, array_size);


    return 0;
}

void pause()
{
    std::cout << "Press ENTER to continue... " << std::flush;
    std::cin.ignore( std::numeric_limits <std::streamsize> ::max(), '\n' );
}

template<class T> void selection_sort(T a[], const int size)
{
    int index_of_smallest = 0;

    for (int current_index = 0; current_index < size; current_index++)
    {
        // Find the index of the lowest item in the array.
        index_of_smallest = index_of_next_smallest(a, size, current_index);

        // Swap the smallest item with the item on the current index.
        swap_values(a[current_index], a[index_of_smallest]);


        // Display the array.
        std::cout << "Step " << current_index + 1 <<  ": [ ";

        for (int i = 0; i < size; i++)
        {
            std::cout << a[i] << " ";
        }

        std::cout << "]" << '\n';

        std::cout << "Press RETURN to continue...\n";

        std::cin.get();

        // For windows:
        // system("pause");
    }
}

template<class T>
int index_of_next_smallest(T a[], const int size, const int start_index)
{
    int index_of_smallest = start_index, min = a[start_index];



    // Iterate through the array to find the lowest possible item.

    for (int index = start_index; index < size; index++)
    {
        if (a[index] < min)
        {
            min = a[index];
            index_of_smallest = index;
        }
    }



    // Return the index of that item.

    return index_of_smallest;
}

template<class T> void swap_values(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
