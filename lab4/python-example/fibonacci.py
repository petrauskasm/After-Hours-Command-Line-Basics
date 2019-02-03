#!/usr/bin/env python

import argparse

def fibonacci(n):
    """
    Computes the given nth number in the fibonacci sequence
    :param n: the nth number to be calculated
    :return:        the number
    """
    if n < 0 or n > 100:
        return "Must enter a positive number between 0 and 100."

    a = [0, 1]
    for i in range(2, n + 1):
        a.append(a[i-2] + a[i-1])
    return a[n]

if __name__ == "__main__":

    parser = argparse.ArgumentParser(description="Will find the nth given fibonacci number between 0 and 100.")
    requiredNamed = parser.add_argument_group('required arguments')
    requiredNamed.add_argument("-n", "--number", type=int, help="the nth fibonacci number to be calculated")

    args = parser.parse_args()
    print(fibonacci(args.number))
