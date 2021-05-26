n=int(input())
for _ in range(n):
    t=list(map(int,input().split()))
    l=t[0]
    r=t[1]
    if r<2*l:
        print(r)
    else:
        print(-1)
