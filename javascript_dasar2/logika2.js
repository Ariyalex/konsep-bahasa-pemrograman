function alert (kalimat) {
    console.log(kalimat);
}

var bar = true;
var foo = bar && alert("hello world!");

var bar = false;
var foo = bar && alert("hello Pak Owi!");