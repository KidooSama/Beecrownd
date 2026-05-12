<?php
$v = explode('.',trim(fgets(STDIN)));
// $v = [576, 73];
$notas = [100, 50, 20, 10, 5, 2];
$moedas = [1, 0.5, 0.25, 0.10, 0.05 , 0.01];
$result = '';
 
while (true) {
    echo 'NOTAS:'."\n";
    foreach ($notas as $nota) {
        if($v[0] >= $nota){
            echo $result = floor($v[0]/$nota).' nota(s) de R$ '.sprintf("%.2f",$nota). "\n"; 
            $v[0]= $v[0]%$nota;

        }elseif ($v[0] < $nota) {
        echo $result = 0 .' nota(s) de R$ '.sprintf("%.2f",$nota)."\n"; 
        }
    }
    $v = (float) ($v[0] .".". $v[1]);
    echo 'MOEDAS:'."\n";
    foreach ($moedas as $moeda){
        if($v >= $moeda){
            echo $result = floor($v/$moeda).' moeda(s) de R$ '.sprintf("%.2f",$moeda). "\n"; 
            $v = round(fmod($v,$moeda),2);
            
        }elseif ($v < $moeda) {
            echo $result = 0 .' moeda(s) de R$ '.sprintf("%.2f",$moeda)."\n"; 
        }
        
    }
    return false;
}

?>