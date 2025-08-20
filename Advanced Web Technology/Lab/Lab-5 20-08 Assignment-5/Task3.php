<?php

/**
 * Calculates the area of a rectangle.
 */
function calculateRectangleArea($length, $width) {
    if ($length <= 0 || $width <= 0) {
        return "Length and width must be greater than 0.";
    }
    $area = $length * $width;
    return $area;
}

// Assign the function name to a variable for variable function call
$areaFunction = 'calculateRectangleArea';

// Rectangle dimensions
$length = 10;
$width = 5;

// Call the function using the variable function syntax
echo "Area of rectangle with length $length and width $width is: " . $areaFunction($length, $width);

?>
