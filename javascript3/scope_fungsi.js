// global scope
const num1 = 20;
const num2 = 3;
const name = "Mulyono";

// global scope
function multiply() {
    return num1 * num2;
}

console.log(multiply()); // Output: 60

// nested function
function getScore() {
    const num1 = 2;
    const num2 = 3;

    function add() {
        return `${name} scored ${num1 + num2}`;
    }
    return add();
}

console.log(getScore()); // Output: Mulyono scored 5