"use strict";
console.log(" ");
console.log("Hello World");
console.log(" ");
let name1; // variable declaration
name1 = 'Saad'; // value assignment
console.log(`Hello ${name1}, Would you like to learn more about Typescript?`);
console.log(" ");
let name2 = 'saad Sultan';
// let num:number = 3;
console.log(name2.toLowerCase()); // Output: saad sultan
console.log(" ");
console.log(name2.toUpperCase()); // Output: SAAD SULTAN
console.log(" ");
let titleCaseName = name2.toLowerCase().replace(/\b\w/g, (letter) => letter.toUpperCase());
// regex pattern
console.log(titleCaseName); // Output: Saad Sultan
console.log(" ");
let quote = "A person who never made a mistake never tried anything new.";
let authour = "Albert Einstein";
console.log(`${authour} once said, "${quote}"`);
console.log(" ");
let quote1 = "A person who never made a mistake never tried anything new.";
let famous_person = "Albert Einstein";
let message = `${famous_person} once said, "${quote1}" "${quote}"`;
console.log(message);
console.log(" ");
let famous_person2 = "Albert Einstein";
let message2 = `${famous_person2} once said, **** A person who never made a mistake never tried anything new.****`;
console.log(message2);
/*

console.log(" ");

*/
