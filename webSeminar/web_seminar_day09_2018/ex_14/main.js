$(function () {
    $("p").hover(
        function () {
            $(this).addClass("blue");
        },
        function () {
            $(this).removeClass("blue");
        }
    );

    $("p").on("click", function () {
        $(this).toggleClass("highlighted");
    })

});