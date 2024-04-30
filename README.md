# push_swap
Welcome to the repository of "push_swap" project for 42 School!

## Project Description
The "push_swap" project revolves around the task of sorting data on a stack using a limited set of instructions while aiming for the minimum number of moves possible. The primary objective is to organize a sequence of numbers provided as input to the program.

## Rules
* There are 2 stacks named a and b.
* The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
* The stack b is empty.
* The goal is to sort in ascending order numbers into stack a.
* Operations at your disposal:

<table>
	<thead>
		<tr>
			<th colspan=3><h4>Operations</h4></th>
		</tr>
		<tr>
			<th>op</th>
			<th>description</th>
		</tr>
	</thead>
	<tbody>
	</thead>
		<tr>
			<td align="center">sa</td>
			<td>swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.</td>
		</tr>
		<tr>
			<td align="center">sb</td>
			<td>swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.</td>
		</tr>
		<tr>
			<td align="center">ss</td>
			<td>sa and sb at the same time.</td>
		</tr>
		<tr>
			<td align="center">pa</td>
			<td>push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.</td>
		</tr>
		<tr>
			<td align="center">pb</td>
			<td>push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.</td>
		</tr>
		<tr>
			<td align="center">ra</td>
			<td>rotate a - shift up all elements of stack a by 1. The first element becomes the last one.</td>
		</tr>
		<tr>
			<td align="center">rb</td>
			<td>rotate b - shift up all elements of stack b by 1. The first element becomes the last one.</td>
		</tr>
		<tr>
			<td align="center">rr</td>
			<td>ra and rb at the same time.</td>
		</tr>
		<tr>
			<td align="center">rra</td>
			<td>reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.</td>
		</tr>
		<tr>
			<td align="center">rrb</td>
			<td>reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.</td>
		</tr>
	</tbody>
</table>

## How to Use

1. Install

```sh
git clone git@github.com:furunoluiza/minitalk.git
```

2. Compilation

```bash
make
```

3. Start the server

```bash
./server
```
Copy the Process ID (PID) provided in the output.

4. Send message with client

```bash
./client [server_pid] ["MESSAGE"]
```
Replace [SERVER_PID] with the PID. Replace [MESSAGE] with the data you want to send to the server.
