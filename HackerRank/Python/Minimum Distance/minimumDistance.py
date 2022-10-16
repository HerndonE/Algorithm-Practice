#!/bin/python3
"""
name: Ethan Herndon
date: 10/16/2022
https://www.hackerrank.com/challenges/minimum-distances/problem
reference: Needed additional support to check all elements https://stackoverflow.com/a/16603357
"""
import math
import os
import random
import re
import sys

#
# Complete the 'minimumDistances' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#


def minimumDistances(a):
    minResult = []
    for i in range(len(a) + 1):
        for j in range(i + 1, len(a)):
            if a[i] == a[j]:
                minResult.append(j - i)

    if len(minResult) <= 0:
        return -1
    else:
        return min(minResult)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = minimumDistances(a)

    fptr.write(str(result) + '\n')

    fptr.close()
