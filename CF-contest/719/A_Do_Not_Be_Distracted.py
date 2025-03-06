import sys
input = sys.stdin.readline

t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    s = input().strip()
    
    freq = [0]*26
    ok = True
    cur = s[0]
    freq[ord(cur)-ord('A')]+=1
    for i in range(1,n):
        if(cur!=s[i]):
            if(freq[ord(s[i])-ord('A')]):
                ok=False
                break
            else:
                freq[ord(s[i])-ord('A')]+=1
                cur=s[i]
    
    if(ok):print("YES")
    else: print("NO")
