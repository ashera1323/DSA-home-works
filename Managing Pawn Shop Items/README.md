# Managing Pawn Shop Items
## Limits
- time limit per test 10 seconds
- memory limit per test 256 megabytes
## Problem
Using your implementation of SortedList<T> write a program that manages a list of items sold at a pawn shop. A pawn shop frequently updates the list of items it stores and can provide a list of sold items in any price range.

## Input
The first line of input contains a single number 𝑁 (0<𝑁<10000). Each of the following 𝑁 lines contains one of the following commands:
- ADD <price> <item> — add an item with a given price;
- REMOVE <price> <item> — remove an item;
- LIST <min price> <max price> — ask for a list of items in the given price range.
## Output
The output should contain a single line for every LIST command in the input. The line should contain the list of items with prices, separated by comma: <price1> <item1>, <price2> <item2>, ..., <priceN> <itemN>. The list should be in order of increasing price.
## Example
| Input | |              
| ------ | ------ |
|5|
|ADD $2655.09 elegant baby bottle|
|ADD $4384.77 maniacal fork|
|REMOVE $2655.09 elegant baby bottle|
|ADD $9235.59 puny spray|
|LIST $3003.12 $9106.30|

| Output | |              
| ------ | ------ |
|$4384.77 maniacal fork|

| Input | |              
| ------ | ------ |
|9|
|ADD $150.00 Watch|
|ADD $10.00 Old T-shirt|
|ADD $300.00 TV-set|
|LIST $50.00 $500.00|
|REMOVE $150.00 Watch|
|LIST $50.00 $500.00|
|ADD $130.00 A very nice coffee mug|
|ADD $384.00 A small UFO|
|LIST $50.00 $350.00|

| Output | |              
| ------ | ------ |
|$150.00 Watch, $300.00 TV-set|
|$300.00 TV-set|
|$130.00 A very nice coffee mug, $300.00 TV-set|


| Input | |              
| ------ | ------ |
|10|
|ADD $3570.36 homely rolling office chair|
|ADD $1282.45 tender bathtub|
|ADD $9569.16 sparkling teacup|
|ADD $6769.32 sticky umbrella|
|ADD $1056.96 stormy coffee|
|ADD $4327.63 funny pliers|
|ADD $2859.95 moody plush chair|
|ADD $4337.62 convincing sofa|
|REMOVE $6769.32 sticky umbrella|
|LIST $109.21 $2510.92|

| Output | |              
| ------ | ------ |
|$1056.96 stormy coffee, $1282.45 tender bathtub|


