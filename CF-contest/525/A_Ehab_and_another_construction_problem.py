x = int(input())
ok=False
for i in range(1,x+1):
    for j in range(1,(x+1)):
        if((j%i==0) and ((i*j)>x) and ((j//i)<x)):
            print(j,i)
            ok=True
            break
    if(ok): break
if ok==False: print(-1)