const ex7 = require('./exercise07');
var toFilter = [1, -2, 9, -9];
var passed = ex7.arrayFiltering(toFilter, function(value){
    return value < 0;
})

console.log(passed);
