<?php
$myTimeZone = date_default_timezone_set("Asia/Kolkata");
$date = date("Y-m-d h:i:s A");
print $date;
 $rf = $_GET['rf'];
 $lat = $_GET['lat'];
 $lon = $_GET['lon'];


$host = "localhost";
$user = "id2097850_mango";
$pass = "mangobob";
$db = "id2097850_mango";

$con = mysqli_connect($host,$user,$pass,$db);
if($con)
	echo '</br>connected db succesfully';
	
$sql = "INSERT INTO trackdb (rfid, latt, longt, time) VALUES ('$rf', '$lat', '$lon', '$date')";

$query = mysqli_query($con,$sql);
if ($query)
	echo '</br>data inserted successfully';
else
	echo '</br>unsuccesful insertion';
?>