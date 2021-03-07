# Spell checker
## Limits
- time limit per test 2 seconds
- memory limit per test 256 megabytes
## Problem
Given 2 texts. Your task is to print all unique words from the second text that are not present in the first text.

## Input
First line contains integer 𝑛 (1≤𝑛≤105) — number of the words in the first text.
Second line contains 𝑛 words, separated by spaces.
Third line contains integer 𝑚 (1≤𝑚≤105) — number of the words in the second text.
Fourth line contains 𝑚 words, separated by spaces.
Each word contains only english letters in lowercase, no more than 30 letters in each word.
## Output
First line of output should contain one integer 𝑘 — number of unique words from the second text that are not present in the first text.
Next 𝑘 lines should contain the words, one word per line, in the same order they appear in the second text.


## Example
| Input | |              
| ------ | ------ |
|6|
|to be or not to be|
|6|
|to study or not to study|

| Output | |              
| ------ | ------ |
|1|
|study|


