import math
t=int(input())
for _ in range(t):
    a,b,c=map(int,input().split())
    s1='1'+'0'*(a-1)
    s2='1'+'0'*(b-1)
    s1,s2=int(s1),int(s2)
    if a==b==c:
        print(s1,s2)
        continue
    if c==1:
        s2+=1
    else:
        s2='1'+'4'*(b-1-c)+'0'*c
    print(s1,s2)
