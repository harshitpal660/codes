package main 

import ("fmt")    

var a=8
func demo(){
	var a=9
	fmt.Println("the demo variable is",a)

}
func main(){
	demo()
	fmt.Println("the main variable is",a)

}
