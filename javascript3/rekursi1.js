function loop(x) {
    if (x >= 10) {
        return;
    }

    loop(x + 1);
    console.log(x);
}
loop(0);

// Output:
