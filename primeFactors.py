#!/bin/python3

import os
import sys
def isprime(n):
    if n==1:
        return 0
    for i in range(2,int(n/2)+1):
        if n%i==0:
            return 0
    return 1
def primeCount(n):
    if n==1:
        print(0)
    else:
        sum=1
        cnt=0
        while(sum<=n):
            for i in range(1,n+1):
                if isprime(i):
                    sum=sum*i
                    cnt=cnt+1
        print(cnt)

q = int(input())
for q_itr in range(q):
    n = int(input())

    primeCount(n)
