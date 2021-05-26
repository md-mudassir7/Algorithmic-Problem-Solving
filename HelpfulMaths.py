

s=input()
s=''.join(sorted(s))
s=s.replace('+','')
res=''
for i in range(len(s)):
    res+=s[i]+'+' if i!=len(s)-1 else s[i]
print(res)
