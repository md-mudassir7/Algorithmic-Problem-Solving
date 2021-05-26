
t=int(input())
for _ in range(t):
    n=int(input())
    if n%2050!=0:
        print(-1)
        continue
    n//=2050
    ans=0
    while n>0:
        ans+=n%10
        n//=10
    print(ans)
        
    
