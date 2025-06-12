t = int(input())
for _ in range(t):
    s = input()
    a = s[0]
    for i in range(1,len(s)):
        if(s[i]!='0'): break
        else: a+=s[i]
    b = ""
    for i in range(len(a),len(s)): b+=s[i]
    
    a = int(a)
    if b: b=int(b)
    else: b = 0

    if(a==b or a>b or a==0 or b==0): print(-1)
    else: print(a,b)