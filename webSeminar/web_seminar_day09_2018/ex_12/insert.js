$(function () {
    var $firstImage = $("img:first");
    $firstImage.before("Wow, I precede the image");
    $firstImage.after("hey, I come in last !")
});