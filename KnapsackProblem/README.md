# Knapsack
## Limits
- time limit per test 0.5 seconds
- memory limit per test 1024 megabytes
## Problem
You are given n items, each with some weight wi and cost ci. You also have a knapsack that can withstand a weight of not more than W.
Find the set of items that can be carried in the knapsack with the highest possible total cost.
Use an efficient algorithm to solve this problem.
## Input
The first line contains the integer n, not exceeding 1000 and an integer W, not exceeding 10000.
The second line of input contains n natural numbers wi, not exceeding 100.
In the third row n integers ci not exceeding 100.
The second line of input contains 𝑛 natural numbers 𝑤𝑖, not exceeding 100.
In the third row 𝑛 integers 𝑐𝑖 not exceeding 100.

## Output
In the first line output the number of items in you are taking (the size of the resulting set).
In the second line print indexes of items (numbers from 1 to n), which will be included in the knapsack to get maximum value.
## Example
| Input | |              
| ------ | ------ |
|4 6|
|2 4 1 2|
|7 2 5 1|

| Output | |              
| ------ | ------ |
|3|
|1 3 4| 
