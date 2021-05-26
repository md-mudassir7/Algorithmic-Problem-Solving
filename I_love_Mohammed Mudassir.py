

n=int(input())
l=list(map(int,input().split()))
if n==1:
    print(0)
else:
    res=1
    if l[0]==l[1]:
        res=0
    for i in range(2,n):
        if l[i]>max(l[0:i]):
            res+=1
        if l[i]<min(l[0:i]):
            res+=1
    print(res)
        
