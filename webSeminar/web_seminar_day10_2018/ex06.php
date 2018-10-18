<?php




if ($_GET) {
    $inputType = strtolower($_GET['type']);
    $inputBrand = strtolower($_GET['brand']);


    if ($inputType == "") {
        echo "No type sent yet !\r\n";
        http_response_code(400);
    } else {
        if (strlen($inputType) > 10) {
            http_response_code(400);
            echo $inputType . " : this type has too many characters\r\n";
        } elseif (strlen($inputType) < 3) {
            echo $inputType . " : this type does not have enough characters\r\n";
            http_response_code(400);
        } else {
            $pattern = '/^[a-zA-Z\-]*$/i';
            if (!preg_match($pattern, $inputType)) {
                echo $inputType . " : this type has non-alphabetical characters (different from -)\r\n";
                http_response_code(400);
            } else {

                //TODO vérification in DB
                http_response_code(200);
                echo $inputType . "OK\r\n";
            }
        }
    }



    if ($inputBrand == "") {
        echo "No brand sent yet !\r\n";
    } else {
        if (strlen($inputBrand) > 20) {
            echo $inputBrand . " : this brand has too many characters\r\n";
            http_response_code(400);
        } elseif (strlen($inputBrand) < 2) {
            echo $inputBrand . " : this brand does not have enough characters\r\n";
            http_response_code(400);
        }
        else{

            $split = str_split($inputBrand);
            $invalid = 0;
            foreach ($split as $val){
                if($val != "a" || "b" ||"c" ||"d" || "e" ||"f" ||"g" || "h" || "i" || "j" || "k" || "l" || "m" || "n" || "o" || "p" || "q" || "r" || "s" || "t" || "u" || "v" || "w" || "x" || "y" || "z" ||"-" || "&"){
                    $invalid += 1;
                }
            }
            if($invalid > 0){
                echo $inputBrand . " : this brand has invalid characters\r\n";
                http_response_code(400);
            }
            else{
                echo $inputBrand . "OK\r\n";
                http_response_code(200);
            }
        }
    }


}
?>