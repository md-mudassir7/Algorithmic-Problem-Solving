


n,q=map(int,input().split())
l=list(map(int,input().split()))
l1=list(map(int,input().split()))
for i in range(len(l1)):
    print(l.index(l1[i])+1,end=" ")
    t=l.index(l1[i])
    l[1:t+1]=l[0:t]
    l[0]=l1[i]
