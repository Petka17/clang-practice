# Cracking the Coding Interview Solutions for Clang

## Arrays and Strings

### 1.1 Is Unique

> Implement an algorithms to determine if a string has a unique characters.
> What if you cannot use additional data structures?

_Idea:_ make the task more generic

1. There is a set of unique elements (in case of the task - characters)
1. Also, there is a list that consists from the elements from the set defined above (in case of the task - string)
1. Write an algorithm that returns true if there are no two elements in the list that equal among each other

The simplification of the problem: if there is more elements in the list than in the original set, then it's a guarantee that there are at least one pair of identical elements.

If the number of elements in the list is equal or less than a number of elements in the original set, then the algorithm should take all pairs of elements from the list and compare them among each other. There are two approach to the problem:

1. Take each element from the list and compare it with the elements that follow.
1. Take each element and save it to some data structure that facilitate search procedure, like Hash Map. Before saving the next element in that structure the algorithm should check if there is already an element that equal to the current.

### 1.2 Check Permutaion

> Given two strings, write a method to decide if one is a permutation of the other

_Idea:_ make the task more generic

1. There is a set of unique elements (in case of the task - characters)
1. There are two lists that consist from the element from the set defined above (in case of the task - two strings)
1. Write an algorithm that returns true if both lists consist from the same set of elements including repetitions

The simplification of the problem: if the lengths of given lists are different then it's a guarantee that they consist from different sets of elements.

There are several approches to the case when the lengthes of given lists are the same.

1. Sort both strings and then compare one by one.
2. Use extra data structure like Hash Map to count all elements in one string, and then compare
