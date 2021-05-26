def primes():
    sieve = [True] * 4000000
    for i in range(3,int(4000000**0.5)+1,2):
        if sieve[i]:
            sieve[i*i::2*i]=[False]*((4000000-i*i-1)//(2*i)+1)
    return [2] + [i for i in range(3,4000000,2) if sieve[i]]

def fun(l,n,primes):
    b=[]
    for i in range(n):
        b.append(primes[i])
    indices=[]
    for i in range(len(l)):
        b[i]=max(b[i],b[l[i]-1])
    print(*b)
    

primes=primes()
t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    fun(l,n,primes)
