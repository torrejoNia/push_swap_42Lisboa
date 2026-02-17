
*This project has been created as part of the 42 curriculum by esnavarr.*

# Push_swap

## Description

push_swap is a sorting algorithm project developed in C as part of the 42 curriculum.

The goal of the project is to sort a stack of integers using a limited set of predefined stack operations, while minimizing the number of moves.

The program receives a list of integers as arguments and outputs a sequence of instructions that sort the numbers in ascending order using only two stacks:

- Stack A (initial stack)
- Stack B (auxiliary stack)

The allowed operations are:

- sa, sb, ss
- pa, pb
- ra, rb, rr
- rra, rrb, rrr

🔍 Algorithm Overview

This implementation includes:

- A small-size optimized sorting algorithm (for 2–5 numbers)
- A radix sort implementation for larger datasets
- Argument validation and error handling
- Duplicate detection
- Integer overflow protection
- Custom utility functions (libft-style)

The project focuses on:

Algorithmic efficiency

Memory management

Input validation

Clean modular structure