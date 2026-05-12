<?php

$a = trim(fgets(STDIN));
$b = trim(fgets(STDIN));
$c = trim(fgets(STDIN));
$calc = $b+($c %15);
echo "TOTAL = R$ ".sprintf("%.2f", $calc);

?>