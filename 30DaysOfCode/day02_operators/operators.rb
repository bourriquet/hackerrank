def get_total_cost_of_meal()
    meal_cost = gets.to_f
    tip = gets.to_i
    tax = gets.to_i

    total_cost = (meal_cost + (0.01 * tip * meal_cost) + (0.01 * tax * meal_cost)).round.to_i
    
    return total_cost
end

print("The total meal cost is ", get_total_cost_of_meal(), " dollars.")
