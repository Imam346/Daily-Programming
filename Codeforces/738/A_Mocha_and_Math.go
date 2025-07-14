package main
import "fmt"

func solve(){
	var n int
	fmt.Scan(&n)
	ar:=make([]int, n)
	for i:=0;i<n;i++ {
		fmt.Scan(&ar[i])
	}

	ans:=ar[0]
	for i:=1;i<n;i++ {
		ans&=ar[i]
	}
	fmt.Println(ans)
}
func main(){
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++ {
		solve()
	}
}