<!-- Write a PHP recursive function to find summation of first n numbers -->

<?php
function sum_recursive($n) {
    if ($n == 1) {
        return 1;
    }
    return $n + sum_recursive($n - 1);
}

// Example usage:
$n = 5;
echo "Sum of first $n numbers is " . sum_recursive($n);
?>
 