package main

import "fmt"

func Opposite(value int) int {
	return value * -1
}
func main() {
	fmt.Println("Count of positives / sum of negatives")
	fmt.Println(Opposite(1))
	fmt.Println(Opposite(14))
	fmt.Println(Opposite(-34))
}
