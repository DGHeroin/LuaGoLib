package main
/*
#include "go.c"
*/
import "C"
import "fmt"

func main()  {
    
}
//export GPrintVersion
func GPrintVersion()  {
    fmt.Println("GPrintVersion!!!!")
    C.PrintVersion()
}
