#!/usr/bin/env bash
echo -e "unsigned int variable assignment compilation..."
gcc -std=c11 -Wall -Wextra -Wpedantic firmware/ex-01-variables/main.c -o build/firmware/ex-01-variables/main

./build/firmware/ex-01-variables/main

echo -e "unsigned int arithmetic compilation..."

gcc -std=c11 -Wall -Wextra -Wpedantic firmware/ex-02-arithmetic/main.c -o build/firmware/ex-02-arithmetic/main

./build/firmware/ex-02-arithmetic/main
