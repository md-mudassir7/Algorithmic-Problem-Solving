# cook your dish here
n=int(input())
l=list(map(int,input().split()))
res=sum(l)
q=int(input())
l1=list(map(int,input().split()))
for i in range(q):
    res=res*2
    print(res%(10**9+7))
