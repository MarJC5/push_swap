<h1 align="center">
    <img alt="42Lausanne" title="42Lausanne" src="https://github.com/MarJC5/42/blob/main/42_logo.svg" width="140"> </br>
    Project n°7 - push_swap
    <h4 align="center" style="width: 50%; margin: 2rem auto; font-weight: normal;">
     Sorting algorithms 
    </h4>
</h1>

## Goals

This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves. To make this happen, we have to manipulate various sorting algorithms and choose the most appropriate solution(s) for optimized data sorting.

It start with two empty stacks: **a** and **b**. A random list of integers are given via command line arguments.

Only these moves are allowed:

- `sa` : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
- `sb` : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
- `ss` : `sa` and `sb` at the same time.
- `pa` : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.
- `pb` : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.
- `ra` : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.
- `rb` : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
- `rr` : `ra` and `rb` at the same time.
- `rra` : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
- `rrb` : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
- `rrr` : `rra` and `rrb` at the same time.

## [push_swap_visualizer](https://github.com/o-reo/push_swap_visualizer)

Launch the script with :

python3 pyviz.py `ruby -e "puts (-200..200).to_a.shuffle.join(' ')"` or any other list of numbers.
