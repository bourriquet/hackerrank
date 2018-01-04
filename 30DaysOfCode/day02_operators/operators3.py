def get_total_cost_of_meal():
    meal_cost = float(input())
    tip_percent = int(input())
    tax_percent = int(input())

    tip = 0.01 * tip_percent * meal_cost
    tax = 0.01 * tax_percent * meal_cost

    total_cost = int(round(meal_cost + tip + tax))
    
    return str(total_cost)

print("The total meal cost is " + get_total_cost_of_meal() + " dollars.")
