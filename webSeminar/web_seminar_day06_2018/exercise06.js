module.exports = {
    objectsDeeplyEqual : function(cmp1, cmp2){

        
        var bool = false;
      
        //on test si null 
        if(cmp1 == null || cmp2 == null){
            return (cmp1 == null);
        }


        // Si renvoie true, les objets renvoient à la même référence, donc sont égaux

        if(cmp1 === cmp2)
            return true;

        if(typeof cmp1 != "object" || typeof cmp2 != "object"){
            bool = (cmp1 === cmp2);
            return bool;
        }

            //get les properties
            var prop1 = Object.getOwnPropertyNames(cmp1);
            var prop2 = Object.getOwnPropertyNames(cmp2);
            
        // on vérifie le nombre de properties
            if(prop1.length != prop2.length){
                return false;
            }

            //On vérifie les properties
            for(var prop in cmp1){
                if(cmp2.hasOwnProperty(prop)){

                    //si il a la propriété, on teste l'égalité récursivement
                    return module.exports.objectsDeeplyEqual(cmp1[prop], cmp2[prop]);
                }
                else{
                    bool = false;

                }
            }

        return bool;
    
	
    }
}

