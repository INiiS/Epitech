$(function () {
    $(".platypus").on("click", function () {
        $(this).css("position", "absolute");
        $(this).animate({
                top: "+=200",
            left: "+=150"
            }, "slow", function () {
                $(this).css("backgroundColor", "green")
            }
        )
    })
});

/* for coloring when moving
    $(this).animate({
        top: "+=200";
        left: "==150"
        }).css("backgroundColor", "green");
 */