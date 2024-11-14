function faktorial(n) {
    if (n == 0 || n == 1) {
        return 1
    } else {
        return n * faktorial(n - 1)
    }
}

console.log(faktorial(1)) // 1
console.log(faktorial(2)) // 2
console.log(faktorial(3)) // 6
console.log(faktorial(4)) // 24
console.log(faktorial(5)) // 120