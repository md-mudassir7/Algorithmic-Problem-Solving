import math
def square(n):
    return math.sqrt(n)==int(math.sqrt(n))
def isPowerOfTwo (x):
    return (x and (not(x & (x - 1))) )
t=int(input())
for _ in range(t):
    n=int(input())
    if isPowerOfTwo(n) or (n%2==0 and square(n//2)) or (n%4==0 and square(n//4)):
        print("YES")
    else:
        print("NO")
