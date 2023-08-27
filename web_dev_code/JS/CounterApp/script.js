const CountValue = document.querySelector("#count");

const decrement = () => {
    // take the value convert into integer
    let value = parseInt(CountValue.innerText);
    // decrease the value 
    value = value - 1;
    // set the value
    CountValue.innerText = value;
};

const increment = () => {
    // take the value convert into integer
    let value = parseInt(CountValue.innerText);
    // increase the value 
    value = value + 1;
    // set the value
    CountValue.innerText = value;
};