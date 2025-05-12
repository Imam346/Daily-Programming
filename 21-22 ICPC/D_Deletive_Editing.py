t = int(input())
for _ in range(t):
    a,b = input().split()
    mp1={}
    mp2={}
    for c in a:mp1[c]=mp1.get(c,0)+1
    for c in b:mp2[c]=mp2.get(c,0)+1
    j=0
    for i in range(len(a)):
        if(j<len(b) and a[i]==b[j]):
            x=mp1.get(a[i],0)
            y=mp2.get(b[j],0)
            if(y>x):break
            if(x>y):mp1[a[i]]-=1
            else:
                mp1[a[i]]-=1
                mp2[b[j]]-=1
                j+=1
        else: mp1[a[i]]=mp1.get(a[i],0)-1
    if(j==len(b)):print("YES")
    else: print("NO")