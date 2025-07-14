package main

import (
	"fmt"
)

func solve() {
	var n int
	fmt.Scan(&n)
	if n == 1 {
		fmt.Printf("%d\n", 1)
		return
	}
	if n == 2 {
		fmt.Printf("%d %d ", 2, 1)
		return
	}
	fmt.Print("2 ")
	for i := 3; i <= n; i++ {
		fmt.Printf("%d ", i)
	}
	fmt.Println(1)
}
func main() {
	var t int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		solve()
	}
}
