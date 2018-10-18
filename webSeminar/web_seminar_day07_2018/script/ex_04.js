var div = document.getElementsByTagName("footer")[0].getElementsByTagName("div")[0];
var str = "";
document.addEventListener("keydown", function(event){
    if((event.key).length == 1){
            str = str + event.key;
        }
        div.innerHTML = str.substr(-42, 42);
    
});
