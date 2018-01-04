read mealCost
read tipPercent
read taxPercent

tip=$(echo "$mealCost * $tipPercent * 0.01" | bc -l)
tax=$(echo "$mealCost * $taxPercent * 0.01" | bc -l)

cost=$(echo "$mealCost + $tip + $tax" | bc -l)

printf "The total meal cost is %.0f dollars." $cost
