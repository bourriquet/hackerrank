def get_total_cost_of_meal():
    meal_cost = float(raw_input())
    tip = int(raw_input())
    tax = int(raw_input())

    total_cost = int(round(meal_cost + (0.01 * tip * meal_cost) + (0.01 * tax * meal_cost)))
    
    return str(total_cost)

print("The total meal cost is " + get_total_cost_of_meal() + " dollars.")
