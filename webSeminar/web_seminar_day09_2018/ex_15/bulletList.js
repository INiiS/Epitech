$(function () {
    $("input").on("input", function () {
        var input = $("input").val();
        var list = $("ul");
        var test = /[A-Za-z]/g
        var isValid = test.test(input);

        if (input.length == 3) {
            if (isValid) {
                $("ol").append("<li>" + input + "</li>");
            }
            $("input").val("");

        }
    })

});

