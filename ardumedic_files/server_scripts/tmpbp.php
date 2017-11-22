<?php
$myTimeZone = date_default_timezone_set("Asia/Kolkata");
$date = date("Y-m-d h:i:s A");
print $date;
 $temp = $_GET['temp'];
 $sys = $_GET['sys'];
 $dia = $_GET['dia'];


$host = "localhost";
$user = "id3695780_ardumedic";
$pass = "ardumedic";
$db = "id3695780_ardumedic";

$con = mysqli_connect($host,$user,$pass,$db);
if($con)
	echo '</br>connected db succesfully';
	
$sql = "INSERT INTO tempbp (temperature , systolic , diastolic, time) VALUES ('$temp', '$sys', '$dia', '$date')";

$query = mysqli_query($con,$sql);
if ($query)
	echo '</br>data inserted successfully';
else
	echo '</br>unsuccesful insertion';
?>