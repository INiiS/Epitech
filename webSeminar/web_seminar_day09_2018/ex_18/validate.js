$(function () {


    $("input[type='submit']").prop("disabled", "disabled");


    $("select").on("change", function () {
        var $input = $("#entree");
        var inputType = $("select").val();
        $("option:first").prop("disabled", "disabled");
        switch (inputType) {
            case "note" :
                if ($input.prop("class") != "") {
                    $input.prop("class", "");
                }
                $("input[type='submit']").prop("disabled", "");

                $input.addClass("note");
                break;

            case "email" :
                if ($input.prop("class") != "") {
                    $input.prop("class", "");
                }
                $("input[type='submit']").prop("disabled", "");
                $input.addClass("email");

                break;

            case "todo_":
                if ($input.prop("class") != "") {
                    $input.prop("class", "");
                }
                $input.addClass("todo_");
                $("input[type='submit']").prop("disabled", "");
                break;
        }
    })

    $("input[type='submit']").on("click", function () {
        switch ($("select").val()) {
            case "email":
                var test = /^([a-zA-Z0-9_.+-])+\@(([a-zA-Z0-9-])+\.)+([a-zA-Z0-9]{2,6})+$/
                /* Explications : ^ déclare le début du string à test. Ensuite on récupère dans un groupe(parenthèses) un nombre
                indéfini de caractères, incluant _+-, afin de gérer les alias de mail, on répète ce groupe un nombre indéfini de fois,
                    afin de récupérer l'alias (si présent), et la partie avant le @ du mail (a.b a_b et a+b seront tous capturés).

                Après cela, on récupère le @ (\@) suivi d'un nombre indéfinis de caractères alphanumériques, suivi d'un point et
                d'un TLD compris de lettres et de chiffres (nouveaux TLD) entre 2 & 6 caractères
                */

                if (test.test($("#entree").val())) {
                    var message = "<div class='email'>" + $("#entree").val() + "</div>";
                    if ($("#entree").val()) {
                        $("body").append(message);
                        $("#entree").val("");
                    }
                }
                break;

            case "note":

                var message = "<div class='note'>" + $("#entree").val() + "</div>";
                if ($("#entree").val() !== "") {
                    $("body").append(message);
                    $("#entree").val("");
                }
                break;

            case "todo_" :

                var message = "<div class='todo_'>" + $("#entree").val() + "</div>";
                if ($("#entree").val() !== "") {
                    $("body").append(message);
                    $("#entree").val("");
                }


                break;


        }
    })

    //IDEE
    // Pour gérer multi entrees, split le string, et parcourir


    $("button").on("click", function () {
        $("input[type='checkbox']")
    })
});


