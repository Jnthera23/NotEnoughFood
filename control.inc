//Ayo and Jamail
//Php file to call start_session login
//control.inc

<?php
  session_start();

  if(!(isset($_SESSION["login"]) && $_SESSION["login"] == "OK")) {
    header("Location: login.php");
    exit;
}
?>