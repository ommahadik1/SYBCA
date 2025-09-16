<?php
// Creating an associative array with student names as keys and percentages as values
$students = array(
    "Amit" => 88.5,
    "Divya" => 93.0,
    "Kunal" => 74.8,
    "Priya" => 80.2,
    "Sneha" => 69.4
);


echo "Student Name | Percentage\n";
echo "-------------------------\n";
foreach ($students as $name => $percentage) {
    echo $name . " | " . $percentage . "%\n";
}
?>
