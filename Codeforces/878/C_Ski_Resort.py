t = int(input())
for _ in range(t):
    n,k,q = map(int,input().split())
    ar = list(map(int,input().split()))
    # print(*ar)
    cnt=0
    ans=0
    for i in range(n):
        if(ar[i]<=q):cnt+=1
        else:
            if(cnt>=k):
                ans+= ((cnt-k+1)*(cnt-k+2))//2
            cnt=0
    
    if(cnt>=k):
        ans+= ((cnt-k+1)*(cnt-k+2))//2
    print(ans)