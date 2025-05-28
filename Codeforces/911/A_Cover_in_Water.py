t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    # print(s)
    tot = s.count('.')
    mx = 0
    for i in range(n):
        if(s[i]=='.'):
            j = i
            cnt=0
            while(j<len(s) and s[j]=='.'):
                cnt+=1
                j+=1
            mx = max(mx,cnt)
            i=j-1
    
    if(mx>=3): print(2)
    else: print(tot)