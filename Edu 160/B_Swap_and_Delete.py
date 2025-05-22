t = int(input())
for _ in range(t):
    s = input()
    zero=0
    one=0
    for c in s:
        if(c=='0'): zero+=1
        else: one+=1
    
    ans = 0
    for c in s:
        if(c=='0'):
            if(one):
                ans+=1
                one-=1
            else: break
        else:
            if(zero):
                ans+=1
                zero-=1
            else: break
    print(len(s)-ans)
    