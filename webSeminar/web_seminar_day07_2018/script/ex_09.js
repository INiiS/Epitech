

var dragSquare = document.querySelector("canvas");
var div = document.querySelector("div");
var image = new Image();
image.src = "drag.png";

dragSquare.setAttribute("draggable", true);

function dragStart(event){
    event.dataTransfer.setData("text", "");
    event.dataTransfer.effectAllowed("move");
}

function drop(event){
    event.preventDefault();
    event.target.appendChild(dragSquare);
}

function dragOver(event){
    event.preventDefault();
    event.dataTransfer.dropEffect = "move";
}

div.addEventListener("onmouseup", dragStart);
