

def fun(n):
    return (2**(n-1))%(10**9+7)
t=int(input())
for _ in range(t):
    n=int(input())
    print(fun(n))
