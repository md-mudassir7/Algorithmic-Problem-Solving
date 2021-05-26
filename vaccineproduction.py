# cook your dish here
l=list(map(int,input().split()))
d1=l[0]
v1=l[1]
d2=l[2]
v2=l[3]
p=l[4]
sum=0
i=0
for i in range(1,100001):
    if d1<=i:
        sum+=v1
    if d2<=i:
        sum+=v2
    if sum>=p:
        break
print(i)
