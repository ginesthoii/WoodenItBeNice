def calculate_board_feet(thickness_in, width_in, length_ft):
    """
    Calculates the board feet for a single piece of lumber.
    Lumber under 1 inch thick is typically calculated as 1 inch thick.
    Formula: (T" * W" * L') / 12 = Bd.Ft.
    """
    if thickness_in < 1:
        thickness_in = 1
    board_feet = (thickness_in * width_in * length_ft) / 12
    return board_feet

def main():
    """
    Main function to get project details from the user and generate a cut list.
    """
    print("--- Woodworking Project Cut List Generator ---")
    
    cut_list = []
    total_board_feet = 0

    while True:
        part_name = input("\nEnter part name (e.g., 'Table Leg', 'Shelf', or 'done' to finish): ").strip()
        if part_name.lower() == 'done':
            break

        try:
            quantity = int(input(f"How many {part_name}s do you need? "))
            thickness = float(input(f"Enter thickness of {part_name}s (in inches): "))
            width = float(input(f"Enter width of {part_name}s (in inches): "))
            length = float(input(f"Enter length of {part_name}s (in feet): "))

            part_board_feet = calculate_board_feet(thickness, width, length) * quantity
            total_board_feet += part_board_feet
            
            cut_list.append({
                "part_name": part_name,
                "quantity": quantity,
                "thickness": thickness,
                "width": width,
                "length": length,
                "board_feet": part_board_feet
            })

        except ValueError:
            print("Invalid input. Please enter a valid number for dimensions.")
            continue

    print("\n--- Final Cut List ---")
    if not cut_list:
        print("No items added to the cut list.")
        return

    print("{:<20} {:<10} {:<10} {:<10} {:<10} {:<10}".format(
        "Part", "Qty", "T(in)", "W(in)", "L(ft)", "Bd.Ft."
    ))
    print("-" * 75)
    for item in cut_list:
        print("{:<20} {:<10} {:<10} {:<10} {:<10} {:<10.2f}".format(
            item["part_name"],
            item["quantity"],
            item["thickness"],
            item["width"],
            item["length"],
            item["board_feet"]
        ))
    
    print("-" * 75)
    print(f"Total estimated board feet needed: {total_board_feet:.2f} Bd.Ft.")
    print("Remember to account for waste!")

if __name__ == "__main__":
    main()