module.exports = {
    arrayFiltering : function(array, test){
        var ret_Array = [];

        console.log(typeof test);
        if(typeof test != "function"){
            console.log("La fonction de test n'est pas une fonction.");
            return 1;
        }
        
        array.forEach(function (element){
            if(test(element)){
                ret_Array.push(element);
            }

        });
        return ret_Array;
    }
}
