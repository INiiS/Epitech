module.exports = {
    fizzBuzz : function(num){
        
        var str_container = "";

        if(isNaN(num)){
            console.log("Veuillez entrer un nombre en paramètre.");
            return 1;
        }

        else
            if(num > 0){
                for(var x = 1; x <= num; x++){
                    if(x % 3 == 0){
                        if(x % 5 == 0){
                            str_container += " FizzBuzz,";
                        }
                        else{
                            str_container += " Fizz,";
                        }
                    }
                    else{
                        if(x % 5 == 0){
                            str_container += " Buzz,";
                        }
                        else
                            str_container += " " + x +",";
                    }
                }
        str_container = str_container.substr(0, str_container.length - 1);
        console.log(str_container);
        }
        else if(num <= 0){
            for(x = 0; x >= num; x--){
                if(x % 3 == 0){
                        if(x % 5 == 0){
                            str_container += " FizzBuzz,";
                        }
                        else{
                            str_container += " Fizz,";
                        }
                    }
                    else{
                        if(x % 5 == 0){
                            str_container += " Buzz,";
                        }
                        else
                            str_container += " " + x +",";
                    }
                }
        str_container = str_container.substr(0, str_container.length - 1);
        console.log(str_container);

        }
        
    }
}
