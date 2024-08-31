var Person2 = /** @class */ (function () {
    function Person2(id1, name1, age1) {
        this.id = id1;
        this.name = name1;
        this.age = age1;
    }
    Person2.prototype.display = function () {
        console.log("id:" + this.id);
        console.log("Name:" + this.name);
        console.log("Age:" + this.age);
    };
    return Person2;
}());
;
var p2 = new Person2(21, "Trupti", 23);
p2.display();
var Book = {
    bid: 200,
    bname: "java",
    price: 300
};
console.log(Book);
