# Sorted list ADT
## Limits
- time limit per test 2 seconds
- memory limit per test 256 megabytes
## Problem
Consider a “sorted list” ADT with the following interface:
- void add(T item); // add a new item to the List
- T least(); // return the least element
- T greatest(); // return the greatest element
- T get(int i); // return the i-th least element
- int indexOf(T item); // return the index of an element (in a sorted sequence)
- void remove(int i); // remove i-th least element from the list
- List<T> searchRange(T from, T to); // find all items between from and to
- int size(); // return the size of the list
- boolean isEmpty(); // return whether the list is empty

Note: you can declare List ADT in Java and C++ as either an interface or
an abstract class.

You need to
1. Declare a SortedList<T> interface.
2. Provide an implementation of SortedList<T> with one of the following:
3. LinkedSortedList<T> — an implementation based on singly linked
list;
4. DoublyLinkedSortedList<T> — an implementation based on doubly
linked list;
5. ArraySortedList<T> — an implementation based on arrays.
6. With any option you choose make sure that time complexity for least()
and greatest() is O(1) worst case.
7. Write down the time complexity for all implemented interface methods,
specifying if it is given for worst case or amortized. Provide a short
justification for the given time complexity for searchRange(from, to)
method.
