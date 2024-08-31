class Person2{
    id:number;
    name:string;
    age:number;

    constructor(id1:number,name1: string,age1: number)
    {
        this.id=id1;
        this.name=name1;
        this.age=age1;
    }

    display():void{
        console.log("id:"+this.id);
        console.log("Name:"+this.name);
        console.log("Age:"+this.age);
    }
};

var p2=new Person2(21,"Trupti",23);
p2.display();

var Book={
    bid:200,
    bname:"java",
    price:300
}

console.log(Book);