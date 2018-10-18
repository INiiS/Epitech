var div = document.body.getElementsByTagName("footer")[0].getElementsByTagName("div")[0];
var counter = 0;
div.addEventListener("click", function( event) {
    counter++;
    event.target.innerHTML = counter;
});
