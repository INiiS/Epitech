$(function () {
    $("p").on({
        click: function () {
            $(this).hide();
        },

        mouseenter: function () {
            $(this).css("backgroundColor", "LightGray");
        },

        mouseleave: function () {
            $(this).css("backgroundColor", "white");
        }
    })
});