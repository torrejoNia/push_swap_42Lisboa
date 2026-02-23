
*This project has been created as part of the 42 curriculum by esnavarr.*

# Push_swap

## Description

push_swap is a sorting algorithm project developed in C as part of the 42 curriculum.

The goal of the project is to sort a stack of integers using a limited set of predefined stack operations, while minimizing the number of moves.

The program receives a list of integers as arguments and outputs a sequence of instructions that sort the numbers in ascending order using only two stacks:

- Stack A (initial stack)
- Stack B (auxiliary stack)

### Allowed Operations

#### Swap operations

- sa: Swap the first two elements of stack A.
- sb: Swap the first two elements of stack B.
- ss: Perform sa and sb at the same time.

#### Push Operations

- pa: Push the top element of stack B onto stack A.
- pb: Push the top element of stack A onto stack B.

#### Rotate Operations

- ra: Moves first element to end of stack A.
- rb: Moves first element to end of stack B.
- rr: Perform ra and rb at the same time.

#### Reverse Rotate Operations

- rra: Moves last element of A to top of stack A.
- rrb: Moves last element of B to top of stack B.
- rrr: Perform rra and rrb at the same time.

### 🔍 Algorithm Overview

This implementation includes:

- A small-size optimized sorting algorithm (for 2–5 numbers)
- A radix sort implementation for larger datasets
- Argument validation and error handling
- Duplicate detection
- Integer overflow protection
- Custom utility functions (libft-style)

The project focuses on:

- Algorithmic efficiency
- Memory management
- Input validation
- Clean modular structure

## Instructions

Inside the project folder:

```
make
```
This will generate the executable:

```
./push_swap
```

To remove object files:

```
make clean
```

To remove everything (objects + executable):

```
make fclean
```

### Execution

Run the program with integers as arguments:
```
./push_swap 3 2 1
```
Or as a single string:

```
./push_swap "3 2 1"
```
The program will output the sequence of operations required to sort the stack.

### Validation with 42 Checker

If you have the official checker:

```
ARG="4 67 3 87 23"
./push_swap $ARG | ./checker_linux $ARG
```

Expected output:

```
OK
```
To count the number of operations:

```
./push_swap $ARG | wc -l
```

## Performance targets

Typical evaluation benchmarks for 100% project validation:

- 100 numbers

	- < 700 operations (basic pass)
	- < 550 operations (good score)

- 500 numbers

	- < 5500 operations

## Technical Choices

### Radix Sort

For large inputs, the project uses a binary radix sort algorithm based on indexed values.

This allows sorting in O(n log n) time with a controlled number of operations.

### Indexing System

Instead of sorting raw integers directly, the program:

1. Assigns each number an index based on its sorted position.
2. Applies radix bitwise sorting on the index.
3. Uses bit shifting (>>) and bit masking (& 1) to evaluate bits.

This improves efficiency and avoids integer comparison complexity.

### Modular Structure

The project is divided into:

- Sorting algorithms
- Stack operations
- Argument validation
- Utility functions
- Custom linked list implementation

## Error Handling

The program prints:

```
Error
```
and exits when:

- Non-numeric arguments are provided
- Duplicate numbers exist
- Integer overflow occurs
- Invalid input format is detected

## Resources

Classic references used for this project:

- 42 Subject: push_swap project documentation
- Radix Sort explanation: https://www.geeksforgeeks.org/radix-sort/
- Linked list implementation in C: https://www.tutorialspoint.com/data_structures_algorithms/linked_list_program_in_c.htm
- Push_swap tutorial: https://medium.com/@dansylvain84/my-implementation-of-the-42-push-swap-project-2706fd8c2e9f


