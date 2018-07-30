#!/usr/bin/python

import sys

def hanoi(n, f, t, h):
    if n == 1:
        print(f + " -> " + t)
        return
    hanoi(n-1, f, h, t)
    print(f + " -> " + t)
    hanoi(n-1, h, t, f)

try:
    hanoi(int(sys.argv[1]), 'A', 'C', 'B')
except IndexError:
    print("error: no input number found")
