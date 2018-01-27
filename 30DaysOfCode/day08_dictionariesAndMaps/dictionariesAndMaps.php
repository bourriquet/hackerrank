<?php
$_fp = fopen("php://stdin", "r");

fscanf($_fp, "%d", $N);
$tel = array();

for ($i = 0; $i < $N; $i++) {
    $str = trim(fgets($_fp));
    $strArr = explode(" ", $str);
    
    $tel[$strArr[0]] = $strArr[1];
}

while ($query = trim(fgets($_fp))) {
    if (isset($tel[$query])) {
        echo $query . "=" . $tel[$query] . "\n";
    } else {
        echo "Not found\n";
    }
}

?>
