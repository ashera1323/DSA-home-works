# A. Shunting-yard algorithm
## Limits
- time limit per test 2 seconds
- memory limit per test 256 megabytes
## Problem
You are given mathematical expressions specified in infix notation. Your task is to convert it to a postfix notation (also known as Reverse Polish notation) using shunting-yard algorithm.
## Input
The single line of input contains correct mathematical expression. The expression contains only integer numbers, subtraction, division, multiplication, addition operations, left and right brackets. All tokens are separated by spaces.
## Output
Print converted expression. All tokens must be separated by spaces.

## Example
| Input | Output |
| ------ | ------ |
|( 3 + 4 ) * 5|3 4 + 5 * |
|1 + 2 * ( 3 + 4 )|1 2 3 4 + * + |
