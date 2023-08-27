console.log("chaliye shuru karte hain");

let rectangle = {
    length: 10, breadth: 20,
    
    draw: function (){
        console.log("draw rectangle");
    }
    // we can also write it as 

    /*draw() {
        console.log("draw rectangle");
    } */

};

//for acessing the length and breadth

console.log(rectangle.length);
console.log(rectangle.breadth);

//to acess the function in the object
rectangle.draw();
// factory function:- 

function createRectangle(len,bre) {

    return  rectangle = {
            length: len, breadth: bre,
        
            draw() {
                console.log("draw rectangle");
        }
    
    };
}
//factory function is more logical way to create object
let rectangleObj1 = createRectangle(5,1);
let rectangleObj2 = createRectangle(10,23);
let rectangleObj3 = createRectangle(50,34);
console.log(rectangleObj1);
console.log(rectangleObj2);
console.log(rectangleObj3);


// there are two notations :-
//camelCase :- first letter of first word should be small and other first word or other words have to be capiltal
//example:- createRectangle, firstName
//Pascal notation:- first letter has to be in capital
//example:- CreateRectangle, FirstName

//constructor function :- it initialise your properties and methods
function Rectangle() {
    this.length = 1;
    this.breadth = 3;
    this.draw = function() {
        console.log("drawing rectangle");
    }
}

//for-in loop to iterate in the object keys
let rectangle2 = {
    length: 200,
    breadth: 3123,
    // color: "red"
}

for(let key in rectangle2){
    // console.log(key);//this is used to acess the key
    // console.log(rectangle2[key]);//used to acess the value in the key
    console.log(key,rectangle2[key]);
}

// for-of loop is used on iterables 
// iterables are 
for(let key of Object.entries(rectangle2)){
    console.log(key);
}


// Now we will check that if a property is present in the object or not

if('color' in rectangle2){
    console.log("Present");
}
else{
    console.log("Not Present");
}