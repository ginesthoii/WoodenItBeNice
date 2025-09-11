#include <iostream>
#include <vector>
#include <iomanip>

struct Part {
    std::string name;
    int quantity;
    double thickness;
    double width;
    double length;
    double board_feet;
};

// Function to calculate board feet
double calculate_board_feet(double thickness_in, double width_in, double length_ft) {
    if (thickness_in < 1.0) {
        thickness_in = 1.0;
    }
    return (thickness_in * width_in * length_ft) / 12.0;
}

int main() {
    std::cout << "--- Woodworking Project Cut List Generator ---" << std::endl;
    
    std::vector<Part> cut_list;
    double total_board_feet = 0.0;
    std::string input;
    
    while (true) {
        std::cout << "\nEnter part name ('done' to finish): ";
        std::getline(std::cin, input);
        if (input == "done") {
            break;
        }
        
        Part new_part;
        new_part.name = input;

        std::cout << "How many " << new_part.name << "s do you need? ";
        std::cin >> new_part.quantity;
        std::cout << "Enter thickness of " << new_part.name << "s (in inches): ";
        std::cin >> new_part.thickness;
        std::cout << "Enter width of " << new_part.name << "s (in inches): ";
        std::cin >> new_part.width;
        std::cout << "Enter length of " << new_part.name << "s (in feet): ";
        std::cin >> new_part.length;
        
        new_part.board_feet = calculate_board_feet(new_part.thickness, new_part.width, new_part.length) * new_part.quantity;
        total_board_feet += new_part.board_feet;
        cut_list.push_back(new_part);
        
        // Clear the newline character from the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "\n--- Final Cut List ---" << std::endl;
    if (cut_list.empty()) {
        std::cout << "No items added to the cut list." << std::endl;
    } else {
        std::cout << std::left << std::setw(20) << "Part"
                  << std::setw(10) << "Qty"
                  << std::setw(10) << "T(in)"
                  << std::setw(10) << "W(in)"
                  << std::setw(10) << "L(ft)"
                  << std::setw(10) << "Bd.Ft." << std::endl;
        std::cout << std::setfill('-') << std::setw(70) << "" << std::setfill(' ') << std::endl;
        
        for (const auto& item : cut_list) {
            std::cout << std::left << std::setw(20) << item.name
                      << std::setw(10) << item.quantity
                      << std::setw(10) << std::fixed << std::setprecision(2) << item.thickness
                      << std::setw(10) << std::fixed << std::setprecision(2) << item.width
                      << std::setw(10) << std::fixed << std::setprecision(2) << item.length
                      << std::setw(10) << std::fixed << std::setprecision(2) << item.board_feet << std::endl;
        }
        
        std::cout << std::setfill('-') << std::setw(70) << "" << std::setfill(' ') << std::endl;
        std::cout << "Total estimated board feet needed: " << std::fixed << std::setprecision(2) << total_board_feet << " Bd.Ft." << std::endl;
        std::cout << "Remember to account for waste!" << std::endl;
    }

    return 0;
}