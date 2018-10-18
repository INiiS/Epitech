<?php

if($_POST){
    if($_POST["email"]){
        $pattern = '/^[a-zA-Z0-9.!#$%&’*+\/=?^_`{|}~-]+@[a-zA-Z0-9-]+(?:\.[a-zA-Z0-9-]+)*$/';
        if(preg_match($pattern, $_POST['email'])){
            echo $_POST['email'];
        }
        else{
            http_response_code(400);
        }

    }
}
?>
