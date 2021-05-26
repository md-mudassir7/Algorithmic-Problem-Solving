t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    if sum(l)%k==0:
        print(sum(l)//k)
    else:
        print((sum(l)//k)+1)
