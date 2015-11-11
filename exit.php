//Jasmine and John
//Ends login session for a short amount of time
//exit.php

<?php
  session_start();
  session_destroy();
  header("Location: login.php");
?>