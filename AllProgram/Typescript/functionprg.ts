//optional parameter function
function add(n1:number,n2:number,n3?:number):number
{
    if(n3==undefined)
     return n1+n2;
    return n1+n2+n3;   
}

console.log("Add with two parameter:" +add(20,30));
console.log("Add with three paramter:"+add(20,30,40));

console.log("...................................................")
//default paramtere function
function mul(n1:number,n2:number,n3:number=1):number
{
    
    return n1*n2*n3;   
}

console.log("Multiply 3 number:" +mul(20,3,4));
console.log("Multiply 2 number:" +mul(20,2));

console.log("...............................................")

//rest paramtere function
function printNames(...names:string[]):void
{
    for(var n of names)
    {
        console.log(n);
    }
}

printNames("Dipti", "Trupti");

console.log("...............................................")

//Arrow paramtere function
var multiply=(n1:number,n2:number)=>{
    return n1+n2;

}
console.log("Arrow Function:"+multiply(30,2));