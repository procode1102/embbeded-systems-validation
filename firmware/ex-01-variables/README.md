# Exercise 1: Variables

## Concepts practiced

- Declaring an unsigned integer variable
- Changing its value through assignment
- Printing values using printf

## Observed output

```text
request id 0: 42
request id 1: 99
request id 2: 7
```

## What I learned

An assignment replaces the value stored in an existing variable.

## Build

Run from the systems_engineering repository root:

```bash
mkdir -p build/firmware/ex-01-variables

gcc -std=c11 -Wall -Wextra -Wpedantic \
    firmware/ex-01-variables/main.c \
    -o build/firmware/ex-01-variables/main
```

## Run

```bash
./build/firmware/ex-01-variables/main
```

