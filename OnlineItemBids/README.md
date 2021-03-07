# Online item bids
## Limits
- time limit per test 2 seconds
- memory limit per test 256 megabytes
## Problem
An online website youPay users can sell their items to other users. To do that they use a bidding system that allows a user to provide a minimal and maximal bid for every item they sell.
You need to implement sorting mechanism for youPay that works as follows:
- items with higher current bids come before items with lower current bids;
- when current bids coincide — items are sorted using their maximal bid (in ascending order);
- if those are equal as well — two items should preserve their original order relative to each other.

## Input
First line has a single number n (1≤n≤100000) — number of items to sort. Then follow n lines. Line i contains current (or minimal) bid L (0≤L≤100) and the maximal bid H (0≤H≤100000) for an item i.
## Output
Output n numbers — indices of items in the original sequence.
## Example
| Input | |              
| ------ | ------ |
|5|
|3 50|
|5 720|
|1 7|
|0 0|
|8 500|

| Output | |              
| ------ | ------ |
|5 2 1 3 4|


