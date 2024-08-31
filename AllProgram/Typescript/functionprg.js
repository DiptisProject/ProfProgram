//optional parameter function
function add(n1, n2, n3) {
    if (n3 == undefined)
        return n1 + n2;
    return n1 + n2 + n3;
}
console.log("Add with two parameter:" + add(20, 30));
console.log("Add with three paramter:" + add(20, 30, 40));
console.log("...................................................");
//default paramtere function
function mul(n1, n2, n3) {
    if (n3 === void 0) { n3 = 1; }
    return n1 * n2 * n3;
}
console.log("Multiply 3 number:" + mul(20, 3, 4));
console.log("Multiply 2 number:" + mul(20, 2));
console.log("...............................................");
//rest paramtere function
function printNames() {
    var names = [];
    for (var _i = 0; _i < arguments.length; _i++) {
        names[_i] = arguments[_i];
    }
    for (var _a = 0, names_1 = names; _a < names_1.length; _a++) {
        var n = names_1[_a];
        console.log(n);
    }
}
printNames("Dipti", "Trupti");
console.log("...............................................");
//Arrow paramtere function
var multiply = function (n1, n2) {
    return n1 + n2;
};
console.log("Arrow Function:" + multiply(30, 2));
