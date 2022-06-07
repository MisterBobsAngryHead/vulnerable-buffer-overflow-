# vulnerable-buffer-overflow-
short script for CEH to test buffer overflow attacks

script that sets an array to the size of 8 ints and asks for user input.
without the for loop, the script will result in a buffer overflow if buffer > 8.
with the for loop, user input is sanitized and program quits if input would cause overflow.
