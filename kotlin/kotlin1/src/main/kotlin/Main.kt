
fun main(args: Array<String>) {
    println("Hello World!")




    printAge(21, "lasitha")
    printVariables()
    printArray()
    printIf()
    printArraymodule()
    printCal(21)
    printLoop()
    printmarks(81)
    printPrime(21)

}
fun printAge(a:Int, b:String){
    println("the age of $b is $a")
}
fun printVariables(){
    println("**************")
    val name ="dilshan"
    var grade =21
    grade =13
    println("$name is in grade $grade")

}
fun printArray(){
    println("**************")
    var clothingbrandss = arrayOf("GUCCI","chanel","adidas","zara","puma")

    println("Size of the array is " +clothingbrandss.size)

    println("**************")
    println(clothingbrandss[4])

    println("**************")

    //change an array element
    clothingbrandss[0] = "Levi's"

    //looping through the array
    for(i in clothingbrandss){
        println(i)
    }
}
fun printIf(){
    println("**************")
    var age = 5
    if(age>18){
        println("the person is an adult")
    }
    else{
        println("the person is a child")
    }
}
fun printArraymodule(){

    var module= arrayOf("MAD","PS","DSA","ST")


}
fun printCal(r:Int){

    println("**************")



    var c =(2 * r * Math.PI)

    println("circumference is $c")
}
fun printLoop(){
    println("**************")
    for(i in 1  .. 10){
        println("$i")

    }
    println("**************")
    for(i in 1..20 step 5){
        println("$i")

    }
    println("**************")
    for(i in 1 until 10){
        println("$i")
    }
}

fun printmarks(marks :Int){

    println("**************")

    if (marks in 75 .. 100){
        println("A")
    } else if (marks in 65 .. 74) {
        println("B")
    }
    else if(marks in 50 .. 64){
        println("C")
    }
    else if(marks in 35 .. 49){
        println("D")
    }
    else{
        println("F")
    }
}
fun printPrime(x :Int){

}