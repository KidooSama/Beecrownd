<?php

list($n, $x) = array_map('intval', explode(' ', trim(fgets(STDIN))));
$qt = str_split(trim(fgets(STDIN)));
list($p, $m, $g) = array_map('intval', explode(' ', trim(fgets(STDIN))));


$k = [$p, $m, $g];
$qt_m= 1;
$x_ = $x;

foreach ($qt as $tita) {
    
    if($tita == 'P'){
        if ($x >= $k[0]) {
            $x -=$k[0]; 
        }else{
            $qt_m++;
            $x = $x_ ;
        }
    }elseif ($tita == 'M') {
        if ($x >= $k[1]) {
            $x -= $k[1]; 
        }else{
            $qt_m++;
            $x = $x_ ;
        }
    }elseif ($tita == 'G') {
        if ($x >= $k[2]) {
            $x -= $k[2]; 
        }else{
            $qt_m++;
            $x = $x_;
        }
    }
}
echo $qt_m."\n";
?>