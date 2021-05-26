t=int(input())
for _ in range(t):
    n,k,x,y=map(int,input().split())
    if x==y:
        print(n,n)
    elif x>y:
        if k%4==1:
            print(n,y+n-x)
        elif k%4==2:
            print(n+y-x,n)
        elif k%4==3:
            print(0,x-y)
        elif k%4==0:
            print(x-y,0)
        
    elif x<y:
        if k%4==1:
            print(x+n-y,n)
        elif k%4==2:
            print(n,x+n-y)
        elif k%4==3:
            print(y-x,0)
        elif k%4==0:
            print(0,y-x)
