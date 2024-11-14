let myFunc;
let num = 0;
if (num == 0) {
    myFunc = function(theObject) {
        theObject.make = "Toyota";
    };
}

const myCar = {
    make: "Honda",
    model: "Accord",
    year: 1998,
};

console.log(myCar.make); // Output: Honda
myFunc(myCar);
console.log(myCar.make); // Output: Toyota