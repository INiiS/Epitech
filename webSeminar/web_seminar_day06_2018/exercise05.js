module.exports = {
    range : function(start, end, step){
               

        start = parseInt(start);
        end = parseInt(end);
        step = parseInt(step);
        
        console.log(step);
        if(step === "undefined") //attention true et false valent 0 et 1
            step = 1;

        console.log(step);

        if(step === 0){
            console.log("Veuillez entrer un pas différent de 0.");
            return -1;
        }

        if(isNaN(start) || isNaN(end) || isNaN(step)){
            console.log("Veuillez entrer comme paramètres des nombres uniquement.");
            return 1;
        }
        else if(start > end && step > 0 || start < end && step < 0){
            console.log("Erreur de cohérence. Ceci peut arriver si votre valeur de départ est inférieure à celle d'arrivée et le pas négatif, ou bien si la valeur de départ est supérieure à celle d'arrivée et le pas positif.");
            return 1;
        }
        else{

            var array = [];
            if(start > end && step < 0){
                for (x = start; x >= end; x += step){
                    array.push(x);
                }
            }
        
            else{

                for(x = start; x <= end; x += step){
                    array.push(x);
                }   
            }
        }
    return array;
    }
}
