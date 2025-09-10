<?php

$array1 = array(3, 7, 12, 5, 8);
$array2 = array(4, 6, 13, 3, 10);


$sum = array();
for ($i = 0; $i < 5; $i++) {
    $sum[$i] = $array1[$i] + $array2[$i];
}

echo "Sum of the two arrays: ";
print_r($sum);
?>
