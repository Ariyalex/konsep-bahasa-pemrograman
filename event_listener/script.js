btn1 = document.getElementById('btn1');
text1 = document.getElementById('text1');
let isBtn1Active = true;

btn1.addEventListener('click', () => {
    if (isBtn1Active) {
        text1.style.backgroundColor = 'gray';
        text1.style.color = 'white';
        isBtn1Active = false;
    } else {
        text1.style.backgroundColor = 'white';
        text1.style.color = 'black';
        isBtn1Active = true;
    }
})

btn2 = document.getElementById('btn2');
pesan1 = document.getElementById('pesan1');
pesan2 = document.getElementById('pesan2');
let isBtn2Active = true;

btn2.addEventListener('mouseover', () => {
    if (isBtn2Active) {
        pesan1.style.display = 'block';
        pesan2.innerHTML = 'Mouse over button 2';
        isBtn2Active = false;
    } else {
        pesan1.style.display = 'none';
        pesan2.innerHTML = '';
        isBtn2Active = true;
    }
})

input1 = document.getElementById('input1');
keydown1 = document.getElementById('keydown1');

input1.addEventListener('keydown', (event) => {
    keydown1.innerHTML= event.key;
})

input2 = document.getElementById('input2');
btn3 = document.getElementById('btn3');
addInput = document.getElementById('addInput');
btn4 = document.getElementById('btn4');

btn3.addEventListener('click', () => {
    let newInput = document.createElement('li');
    newInput.innerHTML = input2.value;
    addInput.appendChild(newInput);
    input2.value = '';
})

btn4.addEventListener('click', ()=> {
    addInput.removeChild(addInput.lastElementChild);
})