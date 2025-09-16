<?php

$numbers = array(7, 12, 19, 22, 5, 4, 10, 15);

$even_count = 0;
$odd_count = 0;

// Loop through the array and count evens and odds
foreach ($numbers as $num) {
    if ($num % 2 == 0) {
        $even_count++;
    } else {
        $odd_count++;
    }
}

echo "Even numbers count: " . $even_count . "\n";
echo "Odd numbers count: " . $odd_count . "\n";
?>
