# Accounting for a café
## Limits
- time limit per test 5 seconds
- memory limit per test 256 megabytes
## Problem
A local café would like to keep track of its earnings. Your task is to implement a simple accounting program for the café. The program is given a sequence of entries, one per sold item. Each entry contains a timestamp, receipt number, sold item title and its cost. The task is to compute for each date (year, month and day) total amount of money earned, as well as number of unique customers (number of unique receipts).
## Input
First line of the input contains a single number 𝑁 (0<𝑁≤50000) — the number of entries in the input. Following 𝑁 lines each describe one entry. Each entry consists of 5 fields separated by spaces:
-date (YYYY-MM-DD format),
-time (HH:MM:SS format),
-receipt ID (#<ID> format, where ID can contain digits, letters and dash (-)),
-cost ($<number> format) and
-item title (no specified format).
Entries are not guaranteed to appear in chronological order.
## Output
The program should output 𝐾 lines, where K is the number of different dates in the input. For each date the program should output a line with date (YYYY-MM-DD), total cost ($<number>) and number of unique receipt IDs (<number>).
Output is not required to appear in chronological order.

## Example
| Input | Output |
| ------ | ------ |
|5|
|2019-01-24 15:38:17 #495-GE $99.80 CAPPUCCINO| 2021-08-15 $80.45 1|
|2019-01-24 15:38:17 #495-GE $34.95 ESPRESSO RISTRETTO|2019-01-24 $215.57 1|
|2021-08-15 01:46:42 #272-YZ $80.45 CAFFE MOCHA|
|2019-01-24 15:38:17 #495-GE $30.82 LATTE MACCHIATO|
|2019-01-24 15:38:17 #495-GE $50.00 AMERICANO|
|||
|7|
|2021-02-03 01:02:03 #123-AC $250.00 Latte Large|2021-02-03 $1326.0 2|
|2021-02-03 03:02:03 #133-AC $150.00 Latte Small|2021-02-05 $59.0 1|
|2021-02-03 01:02:03 #123-AC $550.00 Espresso|
|2021-02-03 01:02:03 #123-AC $253.00 Flat White|
|2021-02-05 01:02:03 #143-AC $54.00 Double Espresso|
|2021-02-05 01:02:03 #143-AC $5.00 Sugar|
|2021-02-03 01:02:03 #123-AC $123.00 Brownie|
