import math


t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    flag=1
    for i in range(n):
        if math.sqrt(l[i])-int(math.sqrt(l[i]))!=0:
            print('YES')
            flag=0
            break
    if flag==1:
        print('NO')
        
