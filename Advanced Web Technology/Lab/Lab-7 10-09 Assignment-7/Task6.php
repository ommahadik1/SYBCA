<?php

$products = array(
    "Keyboard" => 899,
    "Mouse" => 399,
    "Monitor" => 6999,
    "Speaker" => 1299,
    "Webcam" => 799
);

function displayArray($arr) {
    foreach ($arr as $product => $price) {
        echo "$product => ₹$price\n";
    }
    echo "\n";
}

do {
    echo "Menu:\n";
    echo "1. Sort by key (ascending)\n";
    echo "2. Sort by key (descending)\n";
    echo "3. Sort by value (ascending)\n";
    echo "4. Sort by value (descending)\n";
    echo "5. Exit\n";
    echo "Enter your choice: ";
    $choice = trim(fgets(STDIN));

    $sorted_products = $products; // Copy original array for each option

    switch($choice) {
        case 1:
            ksort($sorted_products); // Ascending key
            echo "Sorted by key (ascending):\n";
            displayArray($sorted_products);
            break;
        case 2:
            krsort($sorted_products); // Descending key
            echo "Sorted by key (descending):\n";
            displayArray($sorted_products);
            break;
        case 3:
            asort($sorted_products); // Ascending value
            echo "Sorted by value (ascending):\n";
            displayArray($sorted_products);
            break;
        case 4:
            arsort($sorted_products); // Descending value
            echo "Sorted by value (descending):\n";
            displayArray($sorted_products);
            break;
        case 5:
            echo "Exiting...\n";
            exit;
        default:
            echo "Invalid choice. Try again.\n";
    }
} while(true);
?>
