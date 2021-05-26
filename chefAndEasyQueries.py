def fun(l,k):
    cnt=0
    cur=0
    for i in range(len(l)):
        cur+=l[i]-k
        if cur<0:
            cnt+=1
            break
        cnt+=1
    if cur>0:
        cnt+=cur//k+1
    print(cnt)
n=int(input())
for _ in range(n):
    n,k=input().split()
    k=int(k)
    l=list(map(int,input().split()))
    fun(l,k)
