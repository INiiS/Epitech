$(function () {
    $(".test").on("click", function () {
        $(".test").hide("slow", function () {
            alert('The paragraph is now hidden')
        });
    })
});