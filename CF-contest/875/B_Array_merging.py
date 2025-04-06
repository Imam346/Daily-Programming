t = int(input())
for _ in range(t):
    n = int(input())
    ar1 = list(map(int,input().split()))
    ar2 = list(map(int,input().split()))
    mp1 = {}
    for i in range(n):
        tmp = ar1[i]
        j=i
        cnt=0
        while(j<n and ar1[j]==tmp):
            cnt+=1
            j+=1
        if tmp not in mp1: mp1[tmp]=cnt
        else: mp1[tmp] = max(mp1[tmp],cnt)
        i=j
    
    mp2 = {}
    for i in range(n):
        tmp = ar2[i]
        j=i
        cnt=0
        while(j<n and ar2[j]==tmp):
            cnt+=1
            j+=1
        if tmp not in mp2: mp2[tmp]=cnt
        else: mp2[tmp] = max(mp2[tmp],cnt)
        i=j

    for key,val in mp2.items():
        if key in mp1: mp1[key]+=val
        else: mp1[key]=val
    
    ans = 0
    for key,val in mp1.items():
        ans = max(ans,val)
    print(ans)