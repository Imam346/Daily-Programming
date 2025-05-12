from collections import Counter
t = int(input())
for _ in range(t):
    s = input()
    n = len(s)
    B = Counter()
    b = Counter()
    ans=''
    for i in range(n-1,-1,-1):
        if(s[i]=='b'): b['b']+=1
        elif(s[i]=='B'): B['B']+=1
        else: 
            if s[i]>='a' and s[i]<='z':
                if(b['b']>0):b['b']-=1
                else: ans+=s[i]
            else:
                if(B['B']>0):B['B']-=1
                else: ans+=s[i]

    print(ans[::-1])