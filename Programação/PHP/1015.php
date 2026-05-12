<?php
list($x1, $y1) = explode(' ', trim(fgets(STDIN)));
list($x2, $y2 ) = explode(' ', trim(fgets(STDIN)));
$dis = sqrt(pow(($x2-$x1),2) + pow(($y2-$y1),2));
echo sprintf("%.4f",$dis). "\n";

?>