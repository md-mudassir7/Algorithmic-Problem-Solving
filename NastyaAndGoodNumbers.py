t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    if b==2:
        print("YES")
        print(a,3*a,4*a)
        continue
    print("YES")
    print(2*a,2*a*(b-1),2*a*b)
