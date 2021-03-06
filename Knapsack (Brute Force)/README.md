# Knapsack (Brute Force)
## Limits
- time limit per test 2 seconds
- memory limit per test 256 megabytes
## Problem
You are given 𝑛 items, each with some weight 𝑤𝑖 and cost 𝑐𝑖. You also have a knapsack that can withstand a weight of not more than 𝑊.
Find the set of items that can be carried in the knapsack with the highest possible total cost.
Use a brute force algorithm to solve this problem.
## Input
The first line contains the integer 𝑛, not exceeding 15 and an integer 𝑊, not exceeding 10000.
The second line of input contains 𝑛 natural numbers 𝑤𝑖, not exceeding 100.
In the third row 𝑛 integers 𝑐𝑖 not exceeding 100.

## Output
In the first line output the number of items in you are taking (the size of the resulting set).
In the second line print indexes of items (numbers from 1 to 𝑛), which will be included in the knapsack to get maximum value.

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
