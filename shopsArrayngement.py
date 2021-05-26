for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    q=int(input())
    for _ in range(q):
        t=list(map(int,input().split()))
        if t[0]==1:
            l[t[1]-1]=t[2]
        elif t[0]==0:
            print(l[t[1]-1+t[3]-1])
