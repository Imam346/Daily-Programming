const input = require("fs").readFileSync(0, "utf-8").trim().split(/\s+/).map(Number);
let idx=0;

function solve()
{
    let n = input[idx++];   
    let a=-1,b=-1,c=-1;
    let flag=false;
    for(let i=0;i<n;i++){
        let x = input[idx++];
        if(x%3==0) a=x;
        if(x%3==1) b=x;
        if(x%3==2) c=x;
        if(a!=-1 && b!=-1 && c!=-1){
            if((a+b+c)%10==3){
                flag=true;
            }
        }
    }
    
    if(flag) console.log("YES");
    else console.log("NO")
}

let t = input[idx++];
while(t--) solve();