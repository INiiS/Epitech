var div = document.getElementsByTagName("footer")[0].getElementsByTagName("div")[0];

div.addEventListener("click", function(){
    spam()
});

function spam(){
    var res = prompt("What's your name ?");
    if(res == null || res == 0){
        spam();
    }
    else{
        var truth = confirm("Are you sure ?");
        if(truth){
            alert("Hello " + res + "!");
            div.innerHTML = "Hello " + res + "!";
        }
        else{
            spam();
        }

    }
}
