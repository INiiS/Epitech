// Déclaration des variables qui vont contenir les données des boutons et du wrapper
var plus = document.getElementsByTagName("button")[0];
var moins = document.getElementsByTagName("button")[1];
var color = document.querySelector("select");
var wrapper = document.querySelector(".wrapper");



//variables de base pour les fonctions
var base_fontSize = getFontSize();


//Déclaration des fonctions

function getFontSize(){
    return parseInt(getComputedStyle(wrapper).fontSize);
}

function increaseFontSize(){
    base_fontSize = getFontSize();
    var inc_fontSize = base_fontSize + 1;
     wrapper.style.fontSize = "" + inc_fontSize + "px"
}

function decreaseFontSize(){
    base_fontSize = getFontSize();
    var dec_fontSize = base_fontSize - 1;
    wrapper.style.fontSize = "" + dec_fontSize + "px"
}

// Event listeners for the two buttons

plus.addEventListener("click", increaseFontSize);
moins.addEventListener("click", decreaseFontSize);

//color changing
color.addEventListener("change", function(){
    document.body.style.backgroundColor = this.value;
});
