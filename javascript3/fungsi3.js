function myFunc(tehArr) {
    tehArr[0] = 30;
}

const arr = [45];

console.log(arr[0]);
myFunc(arr);
console.log(arr[0]);