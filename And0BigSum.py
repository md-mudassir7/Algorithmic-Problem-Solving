t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    print(n**k%(10**9+7))
