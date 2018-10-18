function Hero(name, job, INT, STR){
    var obj = {};
    obj.name = name.charAt(0).toUpperCase() + name.slice(1); //first letter upper case
    obj.job = job;
    obj.INT = INT;
    obj.STR = STR;

    obj.toString = function(){
        var string = "I am " + this.name + " the " + obj.job + ", I have " + obj.INT;
        
        //gestion pluriel/singulier INT
        if(obj.INT > 1){
            string += " intelligence points and ";
        }
        else{
            string += " intelligence point and ";
        }

        //gestion pluriel/singulier STR
        if(obj.STR > 1){
            string += obj.STR + " strength points.";
        }
        else{
            string += obj.STR + " strength point.";
        }

    document.querySelector("footer div").innerHTML += "\"" + string + '\"<br/>';

    };
    return obj;

}






// final code
var mage = new Hero("amadeus", "mage", 10, 3);
var warrior = new Hero("pontius", "warrior", 1, 8);
mage.toString();
warrior.toString();
