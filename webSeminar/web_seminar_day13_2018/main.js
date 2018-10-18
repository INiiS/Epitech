$.fn.extend({
    mygame: function (size) {

        var gameObject = $(this).prop("id");
        var blockSize = parseInt(size);
        var boardSize = 4 * parseInt(blockSize) + 20;

        $(this).append("<div id='board' style='border: 3px solid black; position: absolute; left: 25%; display: flex; flex-wrap: wrap; justify-content: space-around; align-content: space-around; width:" + boardSize + "px; height:" + boardSize + "px;'></div>");

        function insertDivs() {
            for (var i = 0; i < 16; i++) {
                $("#board").append("<div class='square-container'></div>");
            }
            $(".square-container").css("border", "1px solid black");
            $(".square-container").css("width", "" + blockSize + "px");
            $(".square-container").css("height", "" + blockSize + "px");
            $(".square-container").css("line-height", "200px");
            $(".square-container").css("text-align", "center");
            $(".square-container").css("font-size", "5em");

        }

        function randomInt(max) {
            var res = Math.floor(Math.random() * Math.floor(max));
            return res;
        }

        function randomTile() {
            if (!randomTile.called) {
                var randInt = randomInt(5);
                while (randInt === 0 || randInt % 2 === 1) {
                    randInt = randomInt(5);

                }
                $("#board").children()[randomInt(16)].append(randInt);
                randomTile.called = true;
            }
            var randCell = $("#board").children()[randomInt(16)];
            if (randCell.innerText === "") {
                randInt = randomInt(5);
                while (randInt === 0 || randInt % 2 === 1) {
                    randInt = randomInt(5);
                }

                randCell.append(randInt);

            }
            else {
                randomTile();
            }

        }


        function moveUp(cell) {
            //test if nothing is up


            var index = cell.index();
            var text = cell[0].innerText;
            for (var x = index; x >= 4; x = x - 4) {
                if ($(".square-container")[x - 4].innerText === "") {
                    //simulate movement
                    $(".square-container")[x].innerText = "";
                    $(".square-container")[x - 4].innerText = text;

                }
                else if($(".square-container")[x - 4].innerText == text){
                    cell[0].innerText = "";
                    $(".square-container")[x - 4].innerText = text *2;
                }

            }




        }

        function moveDown(cell) {

            var index = cell.index();
            var text = cell[0].innerText;

            for (var x = index; x <= 11; x = x + 4) {
                if ($(".square-container")[x + 4].innerText === "") {
                    $(".square-container")[x].innerText = "";
                    $(".square-container")[x + 4].innerText = text;
                }
                else if(text == $(".square-container")[x + 4]){
                    cell[0].innerText = "";
                    $(".square-container")[x + 4].innerText = text * 2;
                }


            }


        }

        function moveLeft(cell) {
            var index = cell.index();
            var text = cell[0].innerText;

            for (var x = index; x % 4 != 0; x--) {
                if ($(".square-container")[x - 1].innerText === "") {
                    $(".square-container")[x].innerText = "";
                    $(".square-container")[x - 1].innerText = text;
                }
                else if($(".square-container")[x -1].innerText === cell[0].innerText){
                    $(".square-container")[x].innerText = "";
                    $(".square-container")[x + 1].innerText = "";
                    $(".square-container")[x - 1].innerText = text * 2;
                }

            }

        }

        function moveRight(cell) {
            var index = cell.index();
            var text = cell[0].innerText;

            for (var x = index; x % 4 != 3; x++) {
                if ($(".square-container")[x + 1].innerText === "" ) {
                    $(".square-container")[x].innerText = "";
                    $(".square-container")[x + 1].innerText = text;
                }
                else if($(".square-container")[x + 1].innerText === text){
                    cell[0].innerText = "";
                    $(".square-container")[x ].innerText = text * 2;
                }
            }

        }


        function keysHandler() {
            $(document).on("keydown", function (event) {
                switch (event.which) {
                    case 37:
                        $(".square-container").each(function () {
                            moveLeft($(this));
                        });
                        randomTile();
                        break;

                    case 38:
                        //UP
                        $(".square-container").each(function () {
                            moveUp($(this));
                        });
                        randomTile();
                        break;

                    case 39:
                        //RIGHT
                        $($(".square-container").get().reverse()).each(function () {
                            moveRight($(this));
                        });
                        randomTile();
                        break;

                    case 40:
                        //DOWN
                        $($(".square-container").get().reverse()).each(function () {
                            moveDown($(this));
                        });
                        randomTile();
                        break;
                }
            })
        }


        keysHandler();
        insertDivs();
        randomTile();


    }
});

