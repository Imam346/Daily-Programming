const input = require("fs").readFileSync(0, "utf-8").trim().split(/\s+/).map(Number);
let idx=0;

function solve()
{
    let n = input[idx++];
    let x = [];
    for(let i=0;i<n;i++){
        x.push(input[idx++]);
    }
    let y = [];
    for(let i=0;i<n;i++){
        y.push(input[idx++]);
    }

    let pos = []; // positive vector of pair
    let neg = []; // negetive vector of pair
    for(let i=0;i<n;i++){
        let cur = y[i]-x[i]
        if(cur>=0){
            pos.push([cur,x[i],y[i]]);
        }
        else{
            cur = -1*cur;
            neg.push([cur,x[i],y[i]]);
        }
    }

    //sort the array in assending order
    pos.sort((a,b)=> a[0]-b[0]);
    neg.sort((a,b)=> a[0]-b[0]);

    let ans=0;
    let j = 0;
    let sz=neg.length;
    for(let i=0;i<pos.length;i++){
        let x1 = pos[i][1];
        let y1 = pos[i][2];
        let x2,y2;
        if(j<sz){
            x2 = neg[j][1];
            y2 = neg[j][2];
        }
        if((y1+y2)>=(x1+x2)){
            ans++;
            j++;
        }
        else{
            if(i+1<pos.length){
                ans++;
                i++;
            }
        }
    }

    console.log(ans);
}

let t = input[idx++];
while(t--) solve();