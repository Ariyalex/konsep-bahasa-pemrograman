const kotak = document.querySelectorAll('div');

for (let i = 0; i < kotak.length; i++) {
    kotak[i].style.backgroundColor = 'blue';
}

const section = document.querySelector('section');
const a = section.querySelector('a');

a.setAttribute('href', 'https://www.google.com');

const li = document.querySelectorAll('li');

for (let i = 0; i < li.length; i++) {
    li[i].style.backgroundColor = 'cyan';
    li[i].innerHTML = 'Cumi hitam Pak Kris ' + (i + 1);
    li[i].style.fontSize = '30px';
}