<?php
$R = trim(fgets(STDIN));
$pi = 3.14159;
$vol = (4/3) * $pi * $R**3;
echo 'VOLUME = '.sprintf("%.3f", $vol). "\n";

?>