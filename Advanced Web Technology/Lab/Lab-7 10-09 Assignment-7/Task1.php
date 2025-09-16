<?php
$numbers = array(1,2,3,4,5,6,7,8,9,10);

// Display the original array
echo "Original Array: ";
foreach ($numbers as $num) {
    echo $num . " ";    
}
echo "\n";

// Display the array elements in reverse order
echo "Reversed Array: ";
for ($i = count($numbers) - 1; $i >= 0; $i--) {
    echo $numbers[$i] . " ";
}
echo "\n";
?>
