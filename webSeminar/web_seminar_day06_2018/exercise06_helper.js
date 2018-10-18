const ex6 = require('./exercise06');
var obj1 = {here : {is : "an"}, object : 2}
var obj2 = {here : 1, object : 2}
var obj4 = {here : {is : "an"}, object : 2}
var obj3 = {here : {is : "an"}, object: 2, foo: "bar"}

console.log(ex6.objectsDeeplyEqual([1, 2], obj1));
