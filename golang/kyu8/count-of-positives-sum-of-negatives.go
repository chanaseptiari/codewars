package main

import "fmt"

func sum(numbers []int) []int {
	result := []int{0, 0}
	for _, v := range numbers {
		if v > 0 {
			result[0] += 1
		} else {
			result[1] += v
		}
	}
	fmt.Println(result)
	return result
}

func main() {
	fmt.Println("Count of positives / sum of negatives")
	arr := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15}
	sum(arr)

}
