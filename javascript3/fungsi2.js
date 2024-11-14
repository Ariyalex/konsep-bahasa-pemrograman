function myFunc(theObject) {
    theObject.make = "Toyota";
}

const myCar = {
    make: "Honda",
    model: "Accord",
    year: 1998,
};

console.log(myCar.make); // Output: Honda
myFunc(myCar);
console.log(myCar.make); // Output: Toyota