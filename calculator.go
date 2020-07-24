package main 
import ("fmt")
func calc(x,y int) (int,int,int,int) {
out1 := x+y
out2 := x-y
out3 := x*y
out4 := x/y
return out1,out2,out3,out4
}
func main(){
    num1 :=10
    num2 :=2
    result1,result2,result3,result4 :=calc(num1,num2)
fmt.Println("the sum is",result1)
fmt.Println("the difference is",result2)
fmt.Println("the product is",result3)
fmt.Println("the division is",result4)
}
