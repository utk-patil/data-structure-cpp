# Data Structures in C++

This repository contains implementations of various data structures in C++. Each data structure is organized in a separate folder with detailed code examples. This repository is a helpful resource for anyone looking to practice data structures using C++.

## Table of Contents
- [Array, Pointers and Structures](#array-pointers-and-structures)
- [Linked Lists](#linked-lists)
- [Stacks and Queues](#stacks-and-queues)
- [Recursion](#recursion)
- [Trees](#trees)
- [Graphs](#graphs)
- [Sorting](#sorting)
- [Searching and Hashing](#searching-and-hashing)
- [Storage Management](#storage-management)

---

### Array, Pointers and Structures
Array is a linear data structure used to store a collection of elements. Here are some common operations and examples.

1. Program to input values into an array and display them. [🔗](Array/basic.cpp)
2. Program to find the maximum and minimum number in an array. [🔗](Array/min_max.cpp)
3. Program to reverse the elements of an array. [🔗](Array/reverse.cpp)
4. Program to pass array elements to a function. [🔗](Array/array_elements_to_function.cpp)
5. Program to pass an array to a function. [🔗](Array/array_to_function.cpp)
6. Program to input and display matrix. [🔗](Array/matrix.cpp)
7. Program for addition of two matrices.  [🔗](Array/matrices_addition.cpp)
8. Program for multiplication of two matrices. [🔗](Array/matrices_multiplication.cpp)
9. Program to dereference pointer variables. [🔗](Array/dereference_pointer.cpp)
10. Program to understand pointer to pointer. [🔗](Array/pointer_to_pointer.cpp)
11. Program to print the value and address of the elements of an array. [🔗](Array/array_elements_address.cpp)
12. Program to print the value and address of elements of an array using pointer notation. [🔗](Array/array_elements_address_using_pointer.cpp)
13. Call by value. [🔗](Array/call_by_value.cpp)
14. Call by reference. [🔗](Array/call_by_reference.cpp)
15. Program to show how to return more than one value from a function using call by reference. [🔗](Array/return_multiple_value_function.cpp)
16. Program to show a function that returns pointer. [🔗](Array/return_pointer_function.cpp)
17. Program to show that chages to the array made inside the function affect the original array. [🔗](Array/change_array_to_function.cpp)
18. When an array is passed to a fuynction, the receiving argument is declared as a pointer. [🔗](Array/array_passed_function_receiving_arg.cpp)
19. Array of pointers. [🔗](Array/array_of_pointers.cpp)
20. Program to understand dynamic allocation of memory. [🔗](Array/dynamic_memory_allocation.cpp)
21. Program to understand the use of realloc() function. [🔗](Array/realloc.cpp)
22. Program to display the values of structure members. [🔗](Array/structure.cpp)
23. Program to assign a structure variable to another structure variable. [🔗](Array/assign_structure_variable.cpp)
24. Program to understand array of structures. [🔗](Array/structure_array.cpp)
25. Program to understand arrays within structures. [🔗](Array/array_within_structure.cpp)
26. Program to understand pointer to structures. [🔗](Array/pointer_to_structure.cpp)
27. Program to understand how structure memebers are sent to a function. [🔗](Array/pointer_member_as_arg.cpp)
28. Program to understand how a strcture variable is sent to an function. [🔗](Array/structure_variable_as_arg.cpp)
29. Program to understand how a pointer to structure variable is sent to a function. [🔗](Array/pointer_to_structure_as_arg.cpp)
30. Program to understand how a pointer to structure is returned from a function. [🔗](Array/return_pointer_structure_from_function.cpp)
31. Program to understand how a structure varibale is returned from a function. [🔗](Array/return_structure_from_function.cpp)
32. Program to understand how an array of structures is sent to a function. [🔗](Array/array_structure_as_arg.cpp)

---

### Linked Lists
A linked list is a dynamic data structure used to store a sequence of elements, with each element pointing to the next. This section includes implementations for different types of linked lists.

1. Program of single linked list. [🔗](LinkedList/single_linked_list.cpp)
2. Program of double linked list [🔗](LinkedList/double_linked_list.cpp)

---

### Stacks and Queues
Stack is a LIFO (Last In, First Out) data structure commonly used for recursion and function call management.<br><br>
Queue is a FIFO (First In, First Out) data structure, ideal for scenarios like task scheduling.

1. Program of stack using array. [🔗](StacksQueues/stack.cpp)
2. Program of stack using linked list. [🔗](StacksQueues/stack_using_linked_list.cpp)
3. Program of queue using array. [🔗](StacksQueues/queues.cpp)
4. Program of queue using linked list. [🔗](StacksQueues/queue_using_linked_list.cpp)

---

### Sorting
Sorting arranges elements in a specific order. This section covers popular sorting algorithms.

1. Program of sorting using selection sort. [🔗](Sorting/selection_sort.cpp)
2. Program of sorting using bubble sort. [🔗](Sorting/bubble_sort.cpp)
3. Program of sorting using insertion sort. [🔗](Sorting/insertion_sort.cpp)
4. Program of sorting using shell sort. [🔗](Sorting/shell_sort.cpp)

---

### Searching and Hashing
Searching involves finding an element, while hashing enables quick data access using keys.

1. Sequencial or Linear search in an array. [🔗](SearchingHashing/linear_search.cpp)
2. Sentinel sequencial search in an array. [🔗](SearchingHashing/sentinel_linear_search.cpp)
3. Linear search in sorted array. [🔗](SearchingHashing/sorted_linear_search.cpp)
4. Binary search in an array. [🔗](SearchingHashing/binary_search.cpp)
5. Recursive binary search in an array. [🔗](SearchingHashing/recursive_binary_search.cpp)
6. Linear probing. [🔗](SearchingHashing/linear_probing.cpp)
7. Quadratic probing. [🔗](SearchingHashing/quadratic_probing.cpp)
8. Double hashing. [🔗](SearchingHashing/double_hashing.cpp)
9. Separate chaining. [🔗](SearchingHashing/separate_chaining.cpp)
10. Bucket hashing. [🔗](SearchingHashing/bucket_hashing.cpp)

## Exercise
Q1. An array contains the following 18 elements
    12 19 23 27 30 34 45 56 59 61 76 79 83 85 88 90 94 97
    Perform binary search to find the elements 27, 32, 61, 97 in the array.
    Show the values of up, mid and low in each step. [🔗](SearchingHashing/Exercise/q1.cpp)

---

## How to Use This Repository
1. Clone this repository.
2. Navigate to the folder of the topic you are interested in.
3. Compile and run the code files using any C++ compiler.

## Contributing
If you have suggestions or want to add new data structures, feel free to open an issue or submit a pull request. Contributions are welcome!
