$(function () {
    var $input = $("#listItem").val();
    $("button").on("click", function ($input) {
        $("#listItem").after(function () {
            return "<div>" + $("#listItem").val() + "</div>";
        })

        /* $("body").append("<div>" + $("#listItem").val() + "</div>"); */
    })
});