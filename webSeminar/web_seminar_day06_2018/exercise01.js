module.exports = {
    drawTriangle : function(limit){

        if(isNaN(parseInt(limit))){
            console.log('Please enter a number.');
            return 1;
        }

        if(limit < 1){
            console.log('Please enter a positive, non-null number.');
            return 1;
        }


        var x = 0;
        var y = 0;
        str = "";

        for(y; y <= limit; y++){
            for(x = 1 ; x <= y; x++){
                str += "$";
            }
            if(x > 1 && x <= limit){
                str += "\n";
            }
            }
        console.log(str);
        
         
        
    }
}
