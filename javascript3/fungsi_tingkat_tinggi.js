var arr;

const filterGenap = (arr) => arr.filter((val) => val % 2 === 0);

console.log(filterGenap([1, 2, 3, 4, 5, 6])); // [2, 4, 6]
