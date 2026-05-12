<?php

$a = trim(fgets(STDIN));
$b = trim(fgets(STDIN));
$c = trim(fgets(STDIN));
$calc = $b*$c;
echo "NUMBER = ".$a."\n";
echo "SALARY = U$ " . sprintf("%.2f", $calc) . "\n";

?>
