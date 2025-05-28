t = int(input())
for _ in range(t):
    n = int(input())
    ar = list(map(int,input().split()))
    
    ans=0
    for i in range(n-2,-1,-1):
        while(ar[i] and ar[i]>=ar[i+1]):
            ar[i]//=2
            ans+=1
        if(i>0 and ar[i]==0):
            ans=-1
            break
    # print(ans)
    for i in range(n-1):
        if(ar[i]>=ar[i+1]):
            ans=-1
            break
    print(ans)