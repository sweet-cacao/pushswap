# Push_swap
## 1.The task
There are two stacks. The first contains a list of numbers and the second is empty. The goal is to sort the first stack in ascending order using only particualar manipulations.
#### first stack - stack a
#### second stack - stack b
### Operations
sa : swap a - swap the first 2 elements at the top of stack a.

sb : swap b - swap the first 2 elements at the top of stack b.

ss : sa and sb at the same time.

pa : push a - take the first element at the top of b and put it at the top of a.

pb : push b - take the first element at the top of a and put it at the top of b.

ra : rotate a - shift up all elements of stack a by 1.

rb : rotate b - shift up all elements of stack b by 1.

rr : ra and rb at the same time.

rra : reverse rotate a - shift down all elements of stack a by 1.

rrb : reverse rotate b - shift down all elements of stack b by 1.

rrr : rra and rrb at the same time.

### Limits in number of operations:
3 numbers - 3

5 numbers - 12

100 numbers - 700

500 numbers - 5500

## 2. Solution
### < 5 numbers
There are several sorting combinations for 3 numbers, I hardcoded them.

For 5 numbers I send two numbers to stack b. Sort 3 numbers in stack a and send 2 numbers back to stack a in right places.

### < 500
#### First step
First of all, it is reasonable to separate stack into 3 parts. The smallest and middle parts are sent to stack b and sorted at the same time. After that I send the biggest part to stack b. Max and min are left in stack a;
#### Second step
All the numbers must be returned to stack a. To do that every time the number that can be moved with the smallest amount of operations is chosen. Number of operations consists of moves to the top of stack a and finding a right slot in stack b.
#### Third step
Move tha smallest number to the top.

## 3. Bonus
As a bonus I created a graphic visualizer with minilibx.
#### Sorting 100 numbers:
![Demo](demo.gif)
## 4. Usage
- clone the repositary
- make

It compiles push_swap and checker. They recieve as an argument the list of numbers.

./pushswap "5 6 10 12 0 1"

./checker "5 6 10 12 0 1"

Checker also requires operations(ra, sa, rra, sb...). It performs them and types OK if the stack is sorted or KO.

#### Run a program with a visualizer: 
$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker -v $ARG
