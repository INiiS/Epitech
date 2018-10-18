module.exports = {
    arraysAreEqual: function(arr1, arr2) {

        if(!Array.isArray(arr1) || !Array.isArray(arr2)){
            console.log("Erreur : veuillez entrer deux arrays à comparer");
            return 1;
        }

    
        var length_arr1 = arr1.length;
        var length_arr2 = arr2.length;
        var true_equality = false;
        if(length_arr1 != length_arr2){
            console.log(true_equality);

    }else
        {
            for(var x = 0; x < length_arr1; x++){
                true_equality = arr1[x] == arr2[x];
            }
        if(true_equality){
            console.log('True');
        return true;
        }
        else
            //console.log('False');
            return true;
        return false;
        
        }   
    }
}
