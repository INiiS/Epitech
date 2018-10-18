
var clean = function(){
// on récupère et compte le nombre de chaque couleur

var orange = 0;
var purple = 0;
var black = 0;
var olive = 0;

var canvasArray = document.querySelectorAll("canvas");

for (var x = 0; x < canvasArray.length; x ++){
    switch (getComputedStyle(canvasArray[x]).backgroundColor){
        case "rgb(0, 0, 0)" : 
            black++;
            break;

        case "rgb(255, 165, 0)" : 
            orange++;
            break;

        case "rgb(128, 128, 0)" :
            olive++;
            break;

        case "rgb(128, 0, 128)" : 
            purple++;
            break;
    }
}
for(var y = 0; y < orange; y++){
    canvasArray[y].style.backgroundColor = "rgb(255, 165, 0)";
}

for(var z = 0; z < purple; z++){
    console.log(z + orange);
    canvasArray[z+orange].style.backgroundColor = "rgb(128, 0, 128)";
}

for(var xa = 0; xa < black; xa++){
    canvasArray[xa+orange+purple].style.backgroundColor = "rgb(0, 0, 0)";
}

for(var xb = 0; xb < olive; xb++){
    canvasArray[xb+orange+purple+black].style.backgroundColor = "rgb(128, 128, 0)";
}

};

clean();
