#!/usr/bin/env bash
echo "ex01: unsigned int variable assignment compilation..."

gcc -std=c11 -Wall -Wextra -Wpedantic firmware/ex-01-variables/main.c -o build/firmware/ex-01-variables/main

./build/firmware/ex-01-variables/main

###

echo "ex02: unsigned int arithmetic compilation..."

gcc -std=c11 -Wall -Wextra -Wpedantic firmware/ex-02-arithmetic/main.c -o build/firmware/ex-02-arithmetic/main

./build/firmware/ex-02-arithmetic/main

###

echo "ex03: unsigned int variables within conditionals..."

gcc -std=c11 -Wall -Wextra -Wpedantic firmware/ex-03-conditionals/main.c -o build/firmware/ex-03-conditionals/main

./build/firmware/ex-03-conditionals/main
###

echo "ex04: unsigned int variables within loops..."

gcc -std=c11 -Wall -Wextra -Wpedantic firmware/ex-04-loops/main.c -o build/firmware/ex-04-loops/main

./build/firmware/ex-04-loops/main

