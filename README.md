# sorting_algorithms



## Table of Contents

  

- [Introduction](#introduction)

- [Sorting Algorithms](#sorting-algorithms)

- [Big O Notation](#big-o-notation)

- [How to select the best sorting algorithm for a given input](#how-to-select-the-best-sorting-algorithm-for-a-given-input)

- [Algorithms Implemented in this Project](#algorithms-implemented-in-this-project)

- [Sorting a Deck of Cards](#sorting-a-deck-of-cards)

- [Usage](#usage)

- [Contributing](#contributing)

- [License](#license)


  

## Introduction
Sorting algorithms are methods used to organize a large number of items into a specific order, such as numerical or lexicographical. They are widely used in computer science to arrange data for easier use and analysis.

There are various types of sorting algorithms, each with its unique strengths and weaknesses. Common ones include Quick Sort, Merge Sort, Bubble Sort, Insertion Sort, Selection Sort, Heap Sort, and Radix Sort.

The efficiency of these algorithms is often represented using Big O notation. This mathematical notation describes the limiting behavior of a function as the argument approaches a specific value or infinity. In computer science, it's used to describe an algorithm's performance or complexity.

For instance, the time complexity of Bubble Sort in the worst-case scenario is O(n^2), where 'n' is the number of items to be sorted. This implies that doubling the number of items would quadruple the sorting time. Conversely, algorithms like Merge Sort and Heap Sort, which have a time complexity of O(n log n), are more efficient for larger lists.
  

## Sorting Algorithms


  

### Big Oh Notation

****Big O notation is a relative representation of the complexity of an algorithm.****

  

The big O notation is deliberate and gives a rough estimation of how slow or fast an algorithm can be, so you don’t care about the smaller order terms.

  

It also allows you to describe the order or an algorithm’s running time in ****upper bound**** (worst case scenario)

  

****Evaluation of time complexity of an algorithm:****

  

- ****Identify the basic operations:**** These are the operations that directly impact the time complexity, such as comparisons in a sorting algorithm.

- ****Count the operations:**** Determine how the count of these operations grows with the size of the input.

- ****Express in Big O notation:**** Once you know how the operation count grows, you can express this growth rate in Big O notation. For example, if the operation count grows linearly with the input size, the time complexity is O(n).

  

Constants and smaller terms are usually ignored in Big O notation. So, if your operation count is 3n^2 + 2n + 1, the time complexity would be O(n^2).

### How to select the best sorting algorithm for a given input

  

  

  

1. ****Size of the Input****: For small inputs, simple algorithms like Bubble Sort or Insertion Sort can be efficient. For larger inputs, algorithms like Quick Sort, Merge Sort, or Heap Sort are generally better.

2. ****Nature of the Input****: If the input is nearly sorted, algorithms like Insertion Sort can be very efficient. If you know the input is random or reversed, you might choose a different algorithm.

3. ****Memory Limitations****: Some algorithms, like Merge Sort, require extra space. If memory is a concern, you might prefer an in-place algorithm like Quick Sort.

4. ****Stability****: If maintaining the relative order of equal elements is important, choose a stable sort like Merge Sort or Insertion Sort.


## Algorithms Implemented in this Project

  
|     Tasks           |Prototypes                       |
|----------------|-------------------------------|
|0. Bubble sort|`void bubble_sort(int *array, size_t size);`            |
|1. Insertion sort|`void insertion_sort_list(listint_t **list);`            |
|2. Selection sort|`void selection_sort(int *array, size_t size);`|
|3. Quick sort|`void quick_sort(int *array, size_t size);`|
|4. Shell sort - Knuth Sequence|`void shell_sort(int *array, size_t size);`|
|5. Cocktail shaker sort|`void cocktail_sort_list(listint_t **list);`|
|6. Counting sort|`void counting_sort(int *array, size_t size);`|
|7. Merge sort|`void merge_sort(int *array, size_t size);`|
|8. Heap sort|`void heap_sort(int *array, size_t size);`|
|9. Radix sort|`void radix_sort(int *array, size_t size);`|
|10. Bitonic sort|`void bitonic_sort(int *array, size_t size);`|
|11. Quick Sort - Hoare Partition scheme|`void quick_sort_hoare(int *array, size_t size);`|
|12. Dealer|`void sort_deck(deck_node_t **deck);`|

### Bubble Sort
![Bubble-sort-example-300px.gif](https://i.postimg.cc/MKqNGzBW/Bubble-sort-example-300px.gif)

In Bubble Sort, elements are compared one by one and swapped if necessary. This process continues until no more swaps are needed.
The algorithm requires an additional full pass without any swaps to confirm that it's sorted.
Bubble Sort needs (n -1) iterations to go through the list. In each iteration, the largest element moves to the end of the list.

> **Worst-case:** O(n^2)
> **Best Case:** -   O(n)
> **Average Case:** O(n^2)


### Insertion Sort
![Insertion-sort-example-300px.gif](https://i.postimg.cc/QdRqHqzp/Insertion-sort-example-300px.gif)

In Insertion Sort, we iterate through the list, taking one element at a time. We compare it with the element on its left. If it's not in order, we remove it from the list, find its correct location in the sorted part of the list, and insert it there.

As the algorithm iterates, it builds a sorted list. During this process, it shifts all larger values up to make room and inserts the unsorted element in its correct position.
> **Worst-case:** O(n^2)
> **Best Case:** O(n) 
> **Average Case:** O(n^2)

### Selection Sort
![Selection-Sort-Animation.gif](https://i.postimg.cc/15VnfZ1j/Selection-Sort-Animation.gif)

We begin sorting with a sorted list containing zero elements and a completely unsorted one.

The algorithm chooses the smallest element from the unsorted portion, and exchanges it with the first element of the unsorted list. This action effectively shifts the boundary of the sublists one element to the right.
> **Worst-case:**  O(n^2)
> **Best Case:**  O(n^2) 
> **Average Case:**  O(n^2)

### Quick Sort (Lomoto's Partitioning Scheme)
![Sorting-quicksort-anim.gif](https://i.postimg.cc/PrdfksrD/Sorting-quicksort-anim.gif)

An element is selected as a pivot and used to partition the array, effectively placing it in its correct position in the sorted array.
During partitioning, all elements smaller than the pivot are moved to its left, while all greater elements are moved to its right.
The pivot is the value within the partitioned area that needs to be correctly positioned. Its position is then returned to determine where to split the sub-array.

> **Worst-case:** O(n^2)
> **Best Case:** O(nlog(n))
> **Average Case:** O(nlog(n))

### Shell Sort
![Sorting-shellsort-anim.gif](https://i.postimg.cc/qR8r9QPQ/Sorting-shellsort-anim.gif)

Shell sort is a variation of the insertion sort algorithm. It allows for the exchange of distant items by using a gap, which is the interval between items to be compared. The gap is progressively reduced until it becomes one.
By partially sorting the array before applying insertion sort (when the gap equals one), Shell sort ensures that most elements are in their correct positions before doing the last insertion sort.


### Cocktail Sort
![Sorting-shaker-sort-anim.gif](https://i.postimg.cc/QxMLbXdf/Sorting-shaker-sort-anim.gif)

It's a variant of the bubble sort that traverses through the array in both directions.
Each iteration consists of two stages. The first stage moves from left to right, swapping any values that are in the wrong order. The second stage operates in the opposite direction, starting from the point where the last swap occurred (the largest element) and moving back to the beginning of the array, swapping values where necessary.
While the bubble sort moves the largest element to the end of the list on each iteration, the cocktail shaker sort moves both the smallest and the largest elements to their respective ends of the list with each iteration.
> **Worst-case:**  O(n^2)
> **Best Case:** -   O(n) 
> **Average Case:**  O(n^2)

### Counting Sort
Counting sort is a sorting algorithm that sorts elements by counting the number of occurrences of each unique element in the array. The count is stored in an auxiliary array, and the sorting is done by mapping the count as an index of the auxiliary array. This algorithm is not a comparison-based sort and is efficient when the range of potential items in the input is reasonably small. It operates in O(n) time complexity, making it more efficient than comparison-based sorting algorithms like bubble sort or quick sort for specific inputs.
  > **Worst-case:** O(n+k)
> **Best Case:** O(n+k) 
> **Average Case:** O(n+k)

### Merge Sort
![Merge-sort-example-300px.gif](https://i.postimg.cc/m2nnyCqr/Merge-sort-example-300px.gif)

Merge sort involves dividing the array into smaller elements and then merging these sorted parts together.
This is achieved recursively by continuously halving the array until it can no longer be divided.
The process creates N sublists, and repeatedly merging these sorted sublists eventually results in one final ordered sublist.

**Splitting:**  This is done recursively until we reach a base case, which is a list of one item.
**Merging:**  The sorted list is placed in a second list. Elements are compared from list A and are sorted into list B. Both lists are then merged from B to A at the next level of recursion.



> **Worst-case:**  O(nlog(n))
> **Best Case:** O(nlog(n))
> **Average Case:** O(nlog(n))


### Heap Sort
![Sorting-heapsort-anim.gif](https://i.postimg.cc/GpxzVyMG/Sorting-heapsort-anim.gif)

Heap sort is a comparison-based sorting algorithm that uses a binary heap data structure. It works by visualizing the elements of the array as a nearly complete binary tree and then applying a heap data structure to sort the array. The process involves building a Max Heap from the input data, where the largest item is the root. The largest item is then moved to the end of the sorted array by swapping it with the last item in the unsorted part of the array. The heap is then reduced by one element, and heapify is run again to bring the largest item to the root. This process is repeated until the entire array is sorted.
**To create a maxheap:**  start from the middle, and perform swaps with children nodes and vice versa, in the same way as insertion sort.

**Extraction Phase:**  this is done by swapping the root with the smallest element of the heap hat needs replacement, and then bubble and fix the heap.
> **Worst-case:**  O(nlog(n))
> **Best Case:** O(nlog(n))
> **Average Case:** O(nlog(n))

### Radix Sort
Radix sort is a non-comparative sorting algorithm. It sorts data with integer keys by grouping keys according to the individual digits, which share the same significant position and value. Usually, the radix is base 10, but it can be any integer.
The algorithm organizes elements into buckets based on their radix, repeating this process for each digit.

**The steps are as follows:**
1- Find the largest element and determine its digit count. The count dictates the number of iterations.
2- Sort elements based on their unit place digits, following the counting sort principle.


### Bitonic Sort
Bitonic sort is an algorithm for sorting binary sequences. It's an interesting algorithm because it's one of the few sorting algorithms that works well in parallel computing. The algorithm works by first forming a bitonic sequence (a sequence that first increases, then decreases or vice versa) and then repeatedly splitting it into two and sorting each half, one in increasing order and the other in decreasing order, until the entire sequence is sorted.

**Bitonic Sort:** It divides the list into bitonic sequences.
**Bitonic Merge:** It gradually merges these sequences into larger ones.
  > **Worst-case:**  O(log^2(n))
> **Best Case:** O(log^2(n))
> **Average Case:** O(log^2(n))

### Quick Sort (Hoare's Partitioning Scheme)
![Quicksort-example.gif](https://i.postimg.cc/L51PKdHw/Quicksort-example.gif)

The Hoare partition scheme is an original partition scheme developed by Tony Hoare, the inventor of Quick Sort. It works by initializing two indices that start at the ends of the array being partitioned, then move toward each other, until they detect an inversion: a pair of elements, one greater than the pivot, one smaller, that are in the wrong order relative to each other. The inverted elements are then swapped. When the indices meet, the algorithm stops and returns the final index.

> **Worst-case:** O(n^2)
> **Best Case:** O(nlog(n))
> **Average Case:** O(nlog(n))
  

## Sorting a Deck of Cards
![800px-Sorting-playing-cards-using-stable-sort-svg.png](https://i.postimg.cc/NFPVKHTZ/800px-Sorting-playing-cards-using-stable-sort-svg.png)
  If we want to sort a deck of cards from Spades (♠), Hearts (♥), Clubs (♣), to Diamonds (♦), with each suit's cards ranked from Ace to King, we can do this by first sorting according to value, then suit. Any algorithm can be used for value sorting, but we should use a stable sorting algorithm for the suit to preserve the rank order.

**Insertion sort** was selected for its stability as a sorting algorithm. To compare card values, a unique hashing function was developed. This function takes the card's value as a string and returns a number that corresponds to the card's expected order in a deck.

## Usage


  
`git clone https://github.com/mo7amedElfadil/sorting_algorithms.git`

  

`cd sorting_algorithms`

  

`gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble`

  

`./bubble`

## Contributing

If you find issues, have suggestions for improvements, or want to add more examples, contributions are welcome! Fork the repository, make your changes, and submit a pull request.

## License

This repository is licensed under the MIT License - see the LICENSE file for details.

Happy coding and happy learning!
