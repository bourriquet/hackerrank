<?php
$_fp = fopen("php://stdin", "r");
fscanf($_fp, '%d %d %d', $dRet, $mRet, $yRet);
fscanf($_fp, '%d %d %d', $dExp, $mExp, $yExp);

if ($yRet > $yExp) {
    echo 10000;
} else if ($yRet == $yExp) {
    if ($mRet > $mExp) {
        $fine = 500 * ($mRet - $mExp);
        echo $fine;
    } else if ($mRet == $mExp) {
        if ($dRet > $dExp) {
            $fine = 15 * ($dRet - $dExp);
            echo $fine;
        } else {
            echo 0;
        }
    } else {
        echo 0;
    }
} else {
    echo 0;
}

?>
