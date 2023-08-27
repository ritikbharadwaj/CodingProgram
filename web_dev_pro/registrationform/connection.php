<?php
  $servername ="localhost";
  $username ="root";
  $password ="";
  $dbname = "registered";

  
  $conn = mysqli_connect($servername,$username,$password,$dbname);

  if($conn)
  {
   //echo "connection set";
  }
  else{
   echo "connection failed".mysqli_connect_error();
  }
?>