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
