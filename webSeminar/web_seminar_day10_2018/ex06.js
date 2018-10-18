
$(function () {
    $("#inputType").on("keydown", function () {
        $.ajax({
            url: "ex06.php",
            type: "GET",
            data: "type=" + $("#inputType").val() + "&brand=" + $("#inputBrand").val()
        })
            .done(function(data){
                console.log(data.responseText);
            })
            .fail(function (data) {
                console.log(data.responseText);
            })
    });

    $("#inputBrand").on("keydown", function(){
        $.ajax({
            url: "ex06.php",
            type: "GET",
            data: "type=" + $("#inputType").val() + "&brand=" + $("#inputBrand").val()
        })
            .done(function (data) {
                console.log(data.responseText);
            })
            .fail(function (data) {
                console.log(data.responseText);
            })

    })
});