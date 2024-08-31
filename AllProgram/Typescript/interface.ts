//optional property
interface one{
    n1:number;
    n2?:number;
}

var i:one={n1:10};
console.log(i);


//Read only property
interface two{
    n1:number;
    n2:number;
}

var i:one={n1:10,n2:200};
console.log(i);