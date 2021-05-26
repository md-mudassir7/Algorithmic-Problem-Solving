import itertools
import operator 
t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    ans='YES'
    for i in range(len(l)-1):
        if l[i]==0:
            ans='NO'
    print(ans)
