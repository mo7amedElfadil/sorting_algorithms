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

> **Worst-case:** ![O(n^{2})](https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392)
> **Best Case:** ![O(n)](https://wikimedia.org/api/rest_v1/media/math/render/svg/34109fe397fdcff370079185bfdb65826cb5565a) 
> **Average Case:** ![O(n^{2})](https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392)

### Insertion Sort
![Insertion-sort-example-300px.gif](https://i.postimg.cc/QdRqHqzp/Insertion-sort-example-300px.gif)
In Insertion Sort, we iterate through the list, taking one element at a time. We compare it with the element on its left. If it's not in order, we remove it from the list, find its correct location in the sorted part of the list, and insert it there.

As the algorithm iterates, it builds a sorted list. During this process, it shifts all larger values up to make room and inserts the unsorted element in its correct position.
> **Worst-case:** ![O(n^{2})](https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392)
> **Best Case:** ![O(n)](https://wikimedia.org/api/rest_v1/media/math/render/svg/34109fe397fdcff370079185bfdb65826cb5565a) 
> **Average Case:** ![O(n^{2})](https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392)


