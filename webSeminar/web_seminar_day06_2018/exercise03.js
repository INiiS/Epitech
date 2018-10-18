module.exports = {
    countGs : function(str){

        var g_compteur = 0;

        if(typeof str == "string"){
            for( var x = 0; x < str.length; x++){
                if((str.charAt(x)) === 'G'){
                    g_compteur++;
                }
            }
            console.log("  Occurences de G : " + g_compteur);
            return g_compteur;
        }
        else{
                console.log("Please enter a string as parameter.");
        }
    }
}
