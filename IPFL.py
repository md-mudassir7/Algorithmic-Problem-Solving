
n=int(input())
s=input()
q=int(input())
l=list(s)
for _ in range(q):
    t,a,b=map(int,input().split())
    if t==1:
        l[a-1],l[b-1]=l[b-1],l[a-1]
    if t==2:
        l[:(n)],l[(n):]=l[(n):],l[:(n)]
print(''.join(l))
