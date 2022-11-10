package main

import (
	"fmt"
	"strconv"
)

func SumMix(arr []any) int {
	result := 0
	for _, value := range arr {
		switch value := value.(type) {
		case int:
			result += value
		case string:
			k, _ := strconv.Atoi(value)
			result += k
		}
	}
	return result
}

func main() {
	fmt.Println("Sum Mixed Array")
	arr := []any{"3", 6, 6, 0, "5", 8, 5, "6", 2, "0"}
	fmt.Println(SumMix(arr))
}
