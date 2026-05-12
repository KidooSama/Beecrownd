<?php
list($a, $b, $c) = explode(' ', trim(fgets(STDIN)));

$maiorXC = max($a,$b,$c);
echo $maiorXC .' eh o maior'. "\n";

?>