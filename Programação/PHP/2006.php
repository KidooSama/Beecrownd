<?php
$result = trim(fgets(STDIN));
$T = trim(fgets(STDIN));

$T = explode(' ', $T);
$valor = 0;
foreach($T as $cha){
  if ($cha == $result){
      $valor ++;
  }
}


echo $valor ;


?>